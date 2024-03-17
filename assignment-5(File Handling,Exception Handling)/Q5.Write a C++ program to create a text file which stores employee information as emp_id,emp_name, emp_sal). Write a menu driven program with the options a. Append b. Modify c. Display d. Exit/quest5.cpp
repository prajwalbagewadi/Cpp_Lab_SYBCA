/*
Q5.Write a C++ program to create a text file which stores employee information as
emp_id,emp_name, emp_sal). Write a menu driven program with the options
a. Append
b. Modify
c. Display
d. Exit
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class emp{
    public:
        int emp_id;
        string emp_name;
        float emp_sal;

    public:
        void accept(){
            cout<<"enter emp id,name,sal:";
            cin>>this->emp_id>>this->emp_name>>this->emp_sal;
        }

        void write_to_file(ofstream &file_obj){
            file_obj<<this->emp_id<<endl;
            file_obj<<this->emp_name<<endl;
            file_obj<<this->emp_sal<<endl;
        }

        void read_from_file(ifstream &file_obj){
            file_obj>>this->emp_id>>this->emp_name>>this->emp_sal;
            cout<<" emp_id:"<<this->emp_id<<" emp_name:"<<this->emp_name<<" emp_sal:"<<this->emp_sal<<endl;
        }
};

int main(){

    //ofstream objects to write file
        ofstream writeobj("emp2.txt",ios::out|ios::app);
    
    //ifstream objects to write file
        ifstream readobj("emp2.txt");

    int n=3,count=0;
    emp class_obj[n];
    int op;
    do{
        cout<<"MENU:"<<endl;
        cout<<"1.Append record:"<<endl;
        cout<<"2.Modify record:"<<endl;
        cout<<"3.Display records:"<<endl;
        cout<<"4.Exit:"<<endl;
        cout<<"Select option:";
        cin>>op;
        switch(op){
            case 1:
                cout<<"Append record:"<<endl;
                if(count<n){
                    class_obj[count].accept();
                    class_obj[count].write_to_file(writeobj);
                    count++;
                    cout<<"count:"<<count<<endl;
                }
            break;
            
            case 2:
                int r;
                cout<<"enter emp_id Num to mod:"<<endl;
                cin>>r;
                for(int i=0;i<count;i++){
                    if(class_obj[i].emp_id==r){
                        class_obj[i].accept();
                        class_obj[i].write_to_file(writeobj);
                    }
                }
                
            break;

            case 3:
                cout<<"read records:"<<endl;
                for(int i=0;i<count;i++){
                    class_obj[i].read_from_file(readobj);
                }
            break;

            case 4:
                exit(0);
            break;
        }
    }while(op!=4);
   
    writeobj.close();
    readobj.close();

     return 0;
}