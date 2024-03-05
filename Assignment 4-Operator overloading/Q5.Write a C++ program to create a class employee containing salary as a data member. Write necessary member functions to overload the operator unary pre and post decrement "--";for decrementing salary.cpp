/*
Q5.Write a C++ program to create a class employee containing salary as a data member.
Write necessary member functions to overload the operator unary pre and post decrement
"--";for decrementing salary
*/
#include<iostream>
using namespace std;
//class
class employee{
    private:
        double salary;
    public:
        employee(double sal){
            salary=sal;
            cout<<"salary="<<this->salary<<endl;
        }
        //unary -- pre decrement
        void operator --(){
             cout<<"before operation salary="<<this->salary<<endl;
            --this->salary;
            cout<<"after operation salary="<<this->salary<<endl;
        }
        ////unary post -- decrement
        void operator --(int){
            cout<<"before operation salary="<<this->salary<<endl;
            this->salary--;
            cout<<"after operation salary="<<this->salary<<endl;
        }
        /*
            search query: how void operator--(int) is working like emp--;

            The void operator--(int) is the post-decrement operator, and when you use it like emp--;, it gets invoked.

            In C++, when you use the post-decrement operator, the (int) in operator--(int) is a dummy parameter, 
            and it serves as a way to differentiate the post-decrement operator from the pre-decrement operator (operator--()). The parameter itself is not used; 
            it's just there to indicate that it's the post-decrement operator.

            Here's how it works:

            cpp
            // Overloading the post-decrement operator --
            void operator--(int) {
                this->salary--;
                cout << "Post-decrement: salary=" << this->salary << endl;
            }
            When you write emp--; in your main function, it will call the operator--(int) for the emp object. The (int) is just a marker, and it doesn't have any particular significance in the function. 
            It could be any valid identifier (e.g., (int x)), but conventionally, it is left unnamed (just (int)) to indicate that the parameter is not used.

            So, in summary, the (int) in void operator--(int) is just a placeholder and is ignored when you use the post-decrement operator in expressions like emp--;.
        */
};

int main(){
    // object creation
    employee emp1(10000);
    employee emp2(10000);
    // operator overloading calls
    --emp1;
    emp2--;
    return 0;
}
