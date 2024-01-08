#include<iostream>
using namespace std;
int main()
{
    int n,result;
    cout<<"enter the n_th term:";
    cin>>n;
    
    //logic 
    for(int outter=1;outter<=n;outter++)
    {
        for(int inner=1;inner<=outter;inner++)
        {
            result+=inner;
        }
    }
    
    cout<<"result="<<result;
}
