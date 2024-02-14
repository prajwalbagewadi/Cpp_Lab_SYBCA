//user defined exception in cpp example:
#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<endl<<"constructor of test class"<<endl;
    }
};

int main(){
    int var=91;
    test obj;
    //try block
    try{
        // exception statement
        if(var>90){
            /*
                throw statement :When a program encounters a throw statement, 
                then it immediately terminates the current function 
                and starts finding a matching catch block to handle the thrown exception.
            */
            throw(obj);
        }
        
    }
    // catch block
    catch(test obj_catcher){
        cout<<"exception has occured"<<endl;
    }
}
