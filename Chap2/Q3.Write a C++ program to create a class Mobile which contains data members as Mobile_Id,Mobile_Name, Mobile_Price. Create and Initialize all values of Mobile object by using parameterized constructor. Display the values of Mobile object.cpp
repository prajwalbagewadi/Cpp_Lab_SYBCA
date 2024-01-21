/*
Q3.Write a C++ program to create a class Mobile which contains data members as
Mobile_Id,Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by
using parameterized constructor. Display the values of Mobile object.
*/
#include<iostream>
#include<string>
using namespace std;
class mobile{
    private:
    int mobile_id;
    string mobile_name;
    float mobile_price;
    /*
    In C++, a parameterized constructor 
    is a constructor that accepts one or more parameters when an object is created. 
    It allows you to initialize the object's data members 
    with values provided during the object's instantiation. 
    */
    public:
    mobile(int m_id,string m_name,float m_price){
        mobile_id=m_id;
        mobile_name=m_name;
        mobile_price=m_price;
    }
    void display(){
        cout<<"mobile_id:"<<mobile_id<<endl;
        cout<<"mobile_name:"<<mobile_name<<endl;
        cout<<"mobile_price:"<<mobile_price<<endl;
    }
};
int main(){
    // Creating an object with a parameterized constructor
    mobile m1(33,"samsung_m33",16000.00);
    m1.display();
    // mobile m2();
    // m2.display();
    return 0;
}
