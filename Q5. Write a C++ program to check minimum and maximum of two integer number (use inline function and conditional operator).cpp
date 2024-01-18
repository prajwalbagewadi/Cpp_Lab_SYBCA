/*
Q5. Write a C++ program to check minimum and maximum of two integer number (use inline
function and conditional operator)
*/
#include<iostream>
using namespace std;
inline int max(int a,int b) { return((a>b)?a:b); }
inline int min(int a,int b) { return((a<b)?a:b); }
int main()
{
    cout<<"Enter val to check Max and Min:"<<endl;
    int num1,num2;
    cout<<"Enter val:";
    cin>>num1>>num2;
    cout<<"max_of"<<num1<<"&"<<num2<<"="<<max(num1,num2)<<endl;
    cout<<"min_of"<<num1<<"&"<<num2<<"="<<min(num1,num2)<<endl;
    return 0;
}
