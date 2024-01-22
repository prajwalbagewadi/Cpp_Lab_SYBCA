/*
Q4. Write a C++ program to create a class Number which contains two integer data members.
Create and initialize the object by using default constructor, parameterized constructor. Write a
member function to display maximum from given two numbers for all objects.
*/
#include<iostream>
using namespace std;
class number{
    private:
    int a;
    int b;
    public:
    // default constructor
    number(){
        a=10;
        b=20;
    }
    // parameterized constructor
    number(int n1,int n2){
        a=n1;
        b=n2;
    }
    int display_max();
};
int number::display_max(){
    return (a>b)?(a):(b);
}
int main(){
    number obj1,obj2(30,15);
    cout<<"max of obj1:"<<obj1.display_max()<<endl;
    cout<<"max of obj2:"<<obj2.display_max()<<endl;
    return 0;
}
