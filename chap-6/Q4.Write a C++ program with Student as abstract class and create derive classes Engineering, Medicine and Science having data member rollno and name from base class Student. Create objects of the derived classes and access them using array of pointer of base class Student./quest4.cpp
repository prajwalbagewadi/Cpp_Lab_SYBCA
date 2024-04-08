/*
Q4.Write a C++ program with Student as abstract class and create derive classes Engineering,
Medicine and Science having data member rollno and name from base class Student. Create objects
of the derived classes and access them using array of pointer of base class Student.
*/

/*
Creating pointers to abstract classes is a common practice in C++ for several reasons:

Polymorphism: Pointers to abstract classes allow for polymorphic behavior, 
enabling code to operate on objects of different derived classes through a common interface. 
This is particularly useful in scenarios where you have a collection of objects of different derived types 
but want to treat them uniformly based on their base class.

Dynamic Memory Management: When dealing with polymorphic objects, 
it's often necessary to allocate memory dynamically. 
Pointers provide a convenient way to manage dynamic memory allocation and deallocation using new and delete operators.

*/

#include<iostream>
#include<string>
using namespace std;

/*
an abstract class is a class that is designed to be used as a base class for other classes. 
It cannot be instantiated on its own; rather, it serves as a blueprint for derived classes. 
Abstract classes often contain one or more pure virtual functions.

A pure virtual function is a virtual function that is declared in the base class but has no implementation. 
It is denoted by appending = 0 to the function declaration. 
Derived classes must override pure virtual functions and provide their own implementations.
*/

//abstract class
class Student{
    public :
        int rollNo;
        string studName;

        Student(int r,string n){
            this->rollNo=r;
            this->studName=n;
        }

        virtual void disp()=0;
        
};

class Engineering : public Student{
    // private :
    //     int rollNo;
    //     string studName;

    public :
    /*
        Initializer List is used in initializing the data members of a class. 
        The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.
    */
        // constructor               // initialization list : parent constructor call
        Engineering(int r,string n) : Student(r,n){

        }

        virtual void disp(){
            cout<<endl<<"Details:"<<endl;
            cout<<"Branch Engineering:"<<endl;
            cout<<"Roll_NO:"<<this->rollNo<<endl;
            cout<<"Name:"<<this->studName<<endl;
            cout<<endl;
        }
        
};

class Medicine : public Student{
    // private :
    //     int rollNo;
    //     string studName;

    public :
    /*
        Initializer List is used in initializing the data members of a class. 
        The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.
    */
        // constructor               // initialization list : parent constructor call
        Medicine(int r,string n) : Student(r,n){

        }

        virtual void disp(){
            cout<<endl<<"Details:"<<endl;
            cout<<"Branch Medicine:"<<endl;
            cout<<"Roll_NO:"<<this->rollNo<<endl;
            cout<<"Name:"<<this->studName<<endl;
            cout<<endl;
        }
        
};

class Science : public Student{
    // private :
    //     int rollNo;
    //     string studName;

    public :
    /*
        Initializer List is used in initializing the data members of a class. 
        The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.
    */
        // constructor               // initialization list : parent constructor call
        Science(int r,string n) : Student(r,n){

        }

        virtual void disp(){
            cout<<endl<<"Details:"<<endl;
            cout<<"Branch Science:"<<endl;
            cout<<"Roll_NO:"<<this->rollNo<<endl;
            cout<<"Name:"<<this->studName<<endl;
            cout<<endl;
        }
        
};

int main(){

    int n=3;
    // base class obj array pointer 
    Student *obj[n];

    obj[0]=new Engineering(1449,"Avani");
    obj[1]=new Science(1411,"Prajwal");
    obj[2]=new Medicine(1413,"Rutuja");

    for(int i=0;i<n;i++){
        obj[i]->disp();
    }
    
    return 0;
}
