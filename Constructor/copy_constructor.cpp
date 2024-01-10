#include<iostream>
using namespace std;
class example
{
    int var;
    public :
    // default constructor:
    // example()
    // {
    //     cout<<"enter value:";
    //     cin>>var;
    // }
    example(int x)
    {
        var=x;
    }
    example(example &old_obj)
    {
        var=old_obj.var;
    }
    void disp()
    {
        cout<<"var:"<<var<<endl;
    }
};

int main()
{
    example obj(10);
    cout<<"\ndefault_constructor:Initialized\n";
    example default_copy_obj=obj;
    cout<<"\ndefault_copy_constructor:Initialized\n";
    example user_copy_obj(obj);
    cout<<"\nUser_defined_copy_constructor:Initialized\n";
    cout<<"\ndefault_constructor:\n";
    obj.disp();
    cout<<"\ndefault_copy_constructor:\n";
    default_copy_obj.disp();
    cout<<"\nUser_defined_copy_constructor:\n";
    user_copy_obj.disp();
    return 0;
}
