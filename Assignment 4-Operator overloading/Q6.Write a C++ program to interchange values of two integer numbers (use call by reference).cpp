/*
Q6.Write a C++ program to interchange values of two integer numbers (use call by
reference).
*/
#include<iostream>
using namespace std;
class interchange{
    public:
        void swap(int *a,int *b){
            int temp;
            cout<<"val in *a="<<*a<<"val in a="<<a<<endl;
            temp=*a;
            cout<<"val in temp="<<temp<<endl;
            cout<<"val in *b="<<*b<<"val in b="<<b<<endl;
            *a=*b;
            *b=temp;
        }
};
int main(){
    int a=10,b=20;
    cout<<"before operation="<<"a="<<a<<"b="<<b<<endl;
    interchange obj;
    // call by reference
    obj.swap(&a,&b);
    cout<<"after operation="<<"a="<<a<<"b="<<b<<endl;
    return 0;
}
