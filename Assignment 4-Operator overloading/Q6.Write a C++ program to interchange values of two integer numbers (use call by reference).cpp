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
            temp=*a;
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
