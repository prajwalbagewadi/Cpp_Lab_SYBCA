/*
Q6. Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name. Write a C++ program with following functions
a. Accept n College details
b. Display College details of specified University
c. Display College details according to Establishment year (Use Array of Objects and
Function Overloading).
*/
#include<iostream>
#include<string>
using namespace std;
class college{
    private:
        int clg_id,est_year;
        string clg_name,uni_name;
    public:
        void accept_disp(int c_id,string cname,int est,string uname){
            clg_id=c_id;
            clg_name=cname;
            est_year=est;
            uni_name=uname;
        }
        void accept_disp(){
            cout<<"\nCollege_Information:\n";
            cout<<"college_id:"<<this->clg_id<<endl;
            cout<<"college_name:"<<this->clg_name<<endl;
            cout<<"Establishment_year:"<<this->est_year<<endl;
            cout<<"Affiliated_University:"<<this->uni_name<<endl;
        }
        void search(string uname){
            if(this->uni_name==uname){
                this->accept_disp();
            }
        }
        void search(int est_year){
            if(this->est_year==est_year){
                this->accept_disp();
            }
        }
    
};
int main(){
        int c_id,est_year,search_year,menu;
        string cname,uname,search_uname;
        college obj[3];
    do{
        cout<<endl<<"college Details Menu:"<<endl;
        cout<<endl<<"1.Accept college Details:"<<endl;
        cout<<endl<<"2.Display college Details:"<<endl;
        cout<<endl<<"3.search by university_name college Details:"<<endl;
        cout<<endl<<"4.search by Establishment_year college Details:"<<endl;
        cout<<endl<<"5.Exit:"<<endl;
        cout<<endl<<"select option:";
        cin>>menu;
        switch(menu){
            case 1:
                for(int i=0;i<3;i++){
                    cout<<"enter college id:";
                    cin>>c_id;
                    cout<<"enter college name:";
                    cin>>cname;
                    cout<<"enter Establishment_year:";
                    cin>>est_year;
                    cout<<"enter Affiliated University:";
                    cin>>uname;
                    obj[i].accept_disp(c_id,cname,est_year,uname);
                }
                break;
            case 2:
                for(int i=0;i<3;i++){
                    obj[i].accept_disp();
                }
                break;
            case 3:
                cout<<"Search by Affiliated university:";
                cin>>search_uname;
                for(int i=0;i<3;i++){
                    obj[i].search(search_uname);
                }
                break;  
            case 4:
                cout<<"display details by Establishment year :"<<endl;
                cout<<"Enter Establishment year :";
                cin>>search_year;
                for(int i=0;i<3;i++){
                    obj[i].search(search_year);
                }
                break;
            case 5:
                exit(0);                
        }
        
    }while(menu!=5);
    
    return 0;
}
