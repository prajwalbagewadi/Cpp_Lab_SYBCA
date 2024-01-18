/*
Q7. Write a C++ program to read two float numbers. Perform arithmetic binary operations +,-,*,
/ on these numbers using inline function.
*/
#include<iostream>
using namespace std;
inline float sum(float a,float b){return(a+b);}
inline float sub(float a,float b){return(a-b);}
inline float mul(float a,float b){return(a*b);}
inline float div(float a,float b){return(a/b);}
int main()
{
    float a,b;
    cout<<"enter values to cal:";
    cin>>a>>b;
    cout<<"sum(+)="<<sum(a,b)<<endl;
    cout<<"sub(-)="<<sub(a,b)<<endl;
    cout<<"mul(*)="<<mul(a,b)<<endl;
    cout<<"div(/)="<<div(a,b)<<endl;

}
