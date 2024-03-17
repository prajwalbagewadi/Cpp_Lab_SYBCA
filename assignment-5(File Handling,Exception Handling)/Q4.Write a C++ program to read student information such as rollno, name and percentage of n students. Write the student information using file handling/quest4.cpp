/*
Q4.Write a C++ program to read student information such as rollno, name and percentage of n
students. Write the student information using file handling.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class stud{
    public :
        int rollno;
        string name;
        float percentage;
   
        stud(){
        cout<<"Enter Roll no:";
            cin>>rollno;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter percentage:";
            cin>>percentage;
        }
       
        void write_file(ofstream &file_w_obj){
            cout<<"obj_writing"<<endl;
            file_w_obj<<rollno<<endl;
            file_w_obj<<name<<endl;
            file_w_obj<<percentage<<endl;
        }

        void read_file(ifstream &file_r_obj){
            cout<<"obj_reading"<<endl;
            file_r_obj>>rollno>>name>>percentage;
            cout<<" roll_no:"<<rollno<<" Name:"<<name<<" percentage:"<<percentage<<endl;
        }
};

int main(){

    int n=3;
    int i;
    stud class_obj[n];
    // ofstream obj to write file using constructor
        ofstream writefile("stu.txt",ios::out);
        
        for(i=0;i<n;i++){
            class_obj[i].write_file(writefile);
        }
        

    // ifstream obj to read file using constructor
    ifstream readfile("stu.txt",ios::in);

        for(i=0;i<n;i++){
            class_obj[i].read_file(readfile);
        }

    writefile.close();
    return 0;
}