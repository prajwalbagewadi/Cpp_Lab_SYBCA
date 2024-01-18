/*
Q6. Write a C++ program to print area of circle, square and rectangle using inline function.
*/
#include<iostream>
using namespace std;
inline int ar_cirle(int r){return(3.142*r*r);}
inline int ar_square(int s){return(s*s);}
inline int ar_rectangle(int l,int b){return(l*b);}
int main()
{
    cout<<"Find area of Shape:"<<endl;
    int shape;
    do
    {
        cout<<"\nMENU:"<<endl;
        cout<<"Shape:circle:1"<<endl;
        cout<<"Shape:square:2"<<endl;
        cout<<"Shape:rectangle:3"<<endl;
        cout<<"Exit:4"<<endl;
        cout<<"Select option:";
        cin>>shape;
        switch(shape)
        {
            case 1:
                int r;
                cout<<"Enter Radius of Circle:";
                cin>>r;
                cout<<"Area:"<<ar_cirle(r);
                break;
            case 2:
                int s;
                cout<<"Enter side of Square:";
                cin>>s;
                cout<<"Area:"<<ar_square(s);
                break;
            case 3:
                int l,b;
                cout<<"Enter length & width of rectangle:";
                cin>>l>>b;
                cout<<"Area:"<<ar_rectangle(l,b);
                break;
            case 4:exit(0);       
        }
    }while(shape!=4);
    return 0;
}
