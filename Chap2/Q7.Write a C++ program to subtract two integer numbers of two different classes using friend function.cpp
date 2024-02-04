/* 
    Q7.Write a C++ program to subtract two integer numbers of two different classes using friend
    function.
*/   
#include<iostream>
using namespace std;

class operand1{
    // private data member
    private:
        int oper1;
        operand1(){
            cout<<"enter val for class_1 object:";
            cin>>oper1;
        } 
            

    // friend function def
    friend  void substraction();

};

class operand2{
    // private data member
    private:
        int oper2;   
        operand2(){
            cout<<"enter val for class_2 object:";
            cin>>oper2;
        }     

    // friend function def
    friend  void substraction();  

};

// friend function defination
void substraction(){
    operand1 obj1;
    operand2 obj2;
    int result=obj1.oper1-obj2.oper2;
    cout<<"class1 val="<<obj1.oper1<<" class2 val="<<obj2.oper2<<endl;
    cout<<"result of friend function substraction is ="<<result<<endl;
}

int main(){
    substraction();
    return 0;
}
