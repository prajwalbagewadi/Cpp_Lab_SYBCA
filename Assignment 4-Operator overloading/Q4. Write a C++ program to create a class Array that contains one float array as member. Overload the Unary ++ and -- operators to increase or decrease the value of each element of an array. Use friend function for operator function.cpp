/*
Q4. Write a C++ program to create a class Array that contains one float array as member.
Overload the Unary ++ and -- operators to increase or decrease the value of each element of an
array. Use friend function for operator function.
*/
#include<iostream>
using namespace std;
//class Declaration
class Array{
    private:
        float *arr,size;
    public :
        Array(int size){
            this->size=size;
            arr=new float[size];
            cout<<endl;
            for(int i=0;i<size;i++){
                cout<<"Enter element:";
                cin>>arr[i];
            }
        }
        void disp(){
            for(int i=0;i<size;i++){
                cout<<i<<"="<<arr[i]<<" ";
            }
        }
        //operator overload ++
        friend void operator ++(Array obj);
        //operator overload --
        friend void operator --(Array obj);
        
}; 
//friend operator overloading ++
void operator ++(Array obj){
    for(int i=0;i<obj.size;i++){
        obj.arr[i]++;
    }
}
//friend operator overloading --
void operator --(Array obj){
    for(int i=0;i<obj.size;i++){
        obj.arr[i]--;
    }
} 
int main(){
    //creation of object -> for array creation
    Array obj(5);
    //call to display
    obj.disp();
    // increament the ++ float arr with operator overloading
    ++obj;
    //call to display
    cout<<endl;
    obj.disp();
    //creation of object -> for array creation
    Array obj1(4);
    //call to display
    obj1.disp();
    // Decreament the -- float arr with operator overloading
    --obj1;
    //call to display
    cout<<endl;
    obj1.disp();
    return 0;
}
