/*
Q1. Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical.
Theory class contains marks of five Subjects and Practical class contains marks of two practical
subjects. Class Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use concept
of Virtual Base Class)
*/
#include<iostream>
#include<string>
using namespace std;

/*
The "diamond problem" is a term used in object-oriented programming, particularly in languages like C++ that support multiple inheritance. 
It refers to an issue that arises when a class inherits from two or more classes that have a common base class. 
This common base class can lead to ambiguity in the program because the derived class inherits multiple copies of the common base class, 
which can result in conflicting or ambiguous method or attribute references.
*/

/*
diamond problem, where a class indirectly inherits from the same base classthrough multiple paths.
1.Used to address the "diamond problem" that can occur in multiple inheritance scenarios.
2.Syntax: class DerivedClass : public virtual BaseClass

a virtual base class is a nested inner class whose functions and member variables can be overridden and redefined by subclasses of an outer class.
*/

class Student{
    public :
        int rollNo;
        string Name;
    
        void getStudent(){
            cout<<"Enter rollNo:";
            cin>>this->rollNo;
            cout<<"Enter studentName:";
            cin>>this->Name;
        }

        void dispStudent(){
            cout<<"rollNo:"<<this->rollNo<<endl;
            cout<<"studentName:"<<this->Name<<endl;
        }

};

class Theory : public virtual Student{
    public :
        int tmarks[5];
    
        void getTmarks(){
            for(int i=0;i<5;i++){
                cout<<"Enter Theory marks:";
                cin>>this->tmarks[i];
            }
            
        }

        int dispTmarks(){
            int t=0;
            for(int i=0;i<5;i++){
                t+=this->tmarks[i];
            }
            cout<<"Total Theory marks:"<<t<<endl;
            return t;
        }

};

class Pratical : public virtual Student{
    public :
        int pmarks[2];
    
        void getPmarks(){
            for(int i=0;i<2;i++){
                cout<<"Enter pratical marks:";
                cin>>this->pmarks[i];
            }
            
        }

        int dispPmarks(){
            int t=0;
            for(int i=0;i<2;i++){
                t+=this->pmarks[i];
            }
            cout<<"Total pratical marks:"<<t<<endl;
            return t;
        }
};

class Result : public Theory,public Pratical{
    public :
        void enterData(){
            this->getStudent();
            this->getTmarks();
            this->getPmarks();
        }

        void dispData(){
            cout<<"Marks Report:"<<endl;
            this->dispStudent();
            int theory=this->dispTmarks();
            int pratical=this->dispPmarks();
            cout<<"Total marks:"<<theory+pratical<<endl;
            cout<<"Percentage(theory):"<<(350/theory)*70<<endl;
            cout<<"Percentage(pratical):"<<(100/pratical)*50<<endl;
        }

};

int main(){
    Result obj;
    obj.enterData();
    obj.dispData();
    return 0;
}
