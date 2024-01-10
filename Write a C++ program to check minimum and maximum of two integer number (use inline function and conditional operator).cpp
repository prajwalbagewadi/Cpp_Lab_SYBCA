/*
Write a C++ program to check minimum and maximum of two integer number (use inline
function and conditional operator)
*/
inline int max(int a,int b){ return(a>b)?a:b; }
inline int min(int a,int b){ return(a<b)?a:b; }
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter two num:";
    cin>>n1>>n2;
    cout<<"max of n1,n2:"<<max(n1,n2)<<endl;
    cout<<"min of n1,n2:"<<min(n1,n2)<<endl;
    return 0;
}
