/*
Q.3 Implement the following class hierarchy: Employee: code, ename, desg Manager (derived from
Employee): year_of_experience, salary Define appropriate functions to accept and display details.
Create n objects of the manager class and display the records.
*/

#include<iostream>
#include<string>
using namespace std;

class Employee{
    private :
        int empCode;
        string empName;
        string empDesg; 
    
    public :
        void accept(){
            cout<<"Enter Employee Code:";
            cin>>this->empCode;
            cout<<"Enter Employee Name:";
            cin>>this->empName;
            cout<<"Enter Employee Designation:";
            cin>>this->empDesg;
        }

        void display(){
            cout<<endl<<"Details:"<<endl;
            cout<<"Employee Code:"<<this->empCode<<endl;
            cout<<"Employee Name:"<<this->empName<<endl;
            cout<<"Employee Designation:"<<this->empDesg<<endl;
        }
};

class Manager : public Employee {
    private :
        int empExp;
        float empSal;
    public :
        void accept(){
            this->Employee::accept();
            cout<<"Enter Employee Experience:";
            cin>>this->empExp;
            cout<<"Enter Employee Salary:";
            cin>>this->empSal;
        }

        void display(){
            this->Employee::display();
            cout<<"Employee Experience:"<<this->empExp<<endl;
            cout<<"Employee Salary:"<<this->empSal<<endl;
            cout<<endl<<"End:"<<endl;
        }
};

int main(){
    int n=3;
    Manager obj[n];
    for(int i=0;i<n;i++){
        obj[i].accept();
    }
     for(int i=0;i<n;i++){
        obj[i].display();
    }
    return 0;
}
