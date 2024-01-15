#include<iostream>
using namespace std;
bool check(int num)
{
    if(num%1==0 && num%num==0)
    {
        if(num%2==0)
        {
            return 0;
        }    
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cout<<"check if num is prime:";
    cin>>num;
    if(check(num))
    {
        cout<<"num="<<num<<"is a prime number";
    }
    else
    {
        cout<<"num="<<num<<"is not prime number";   
    }
    return 0;
}

/*
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout<<"Hello world!";
    int i=67;
    int ans1=i%1;
    cout<<i<<"%1="<<ans1<<endl;
    int ans2=i%i;
    cout<<i<<"%"<<i<<"="<<ans2<<endl;
    int ans3=i%2;
    cout<<i<<"%2="<<ans3<<endl;
    return 0;
}


Output:

Hello world!67%1=0
67%67=0
67%2=1
*/
