/*
Q7.Write C++ program to create a class Employee containing data members Emp_no, Emp_Name,
Designation and Salary. Create and initialize the objects using default, parameterized and Copy
Constructor. Also write member function to calculate Income tax of the employee which is 20% of
salary.
*/
#include<iostream>
using namespace std;
//class 
class Employee {
    private:
        int emp_no;
        string emp_name;
        string post;
        double salary;
        double inc_tax;
    public:
        //default constructor
        Employee(){
            emp_no=0;
            emp_name="name";
            post="post";
            salary=0;
            inc_tax=0.20;
        }
        // parametrized constructor
        Employee(int eno,string ename,string pos,double sal){
            emp_no=eno;
            emp_name=ename;
            post=pos;
            salary=sal;
            inc_tax=0.20;
        }
        //copy constructor
        Employee(Employee &obj){
            this->emp_no=obj.emp_no;
            this->emp_name=obj.emp_name;
            this->post=obj.post;
            this->salary=obj.salary;
            this->inc_tax=0.20;
        }
        // member function to calculate income tax 
        void income_tax(){
            double r=(double(20)/double(100));
            cout<<"rate="<<r<<endl;
            inc_tax=this->salary*r;
            cout<<"Income_tax="<<this->inc_tax<<endl;
            
        }
        //member function disp
        void disp(){
            cout<<endl<<"Emp_id:"<<this->emp_no<<endl;
            cout<<endl<<"Emp_name:"<<this->emp_name<<endl;
            cout<<endl<<"Emp_Designation:"<<this->post<<endl;
            cout<<endl<<"Emp_salary:"<<this->salary<<endl;
            cout<<endl<<"Income_tax:"<<this->inc_tax<<endl;
        }
};

int main(){
    // call to default constructor
    Employee e1();
    // call to parameterized constructor
    Employee e2(101,"vaishu desai","Manager",55000);
    e2.disp();
    e2.income_tax();
    e2.disp();
    // call to copy constructor
    cout<<"copied object details:"<<endl;
    Employee e3(e2);
    e3.income_tax();
    e3.disp();
    return 0;
}
