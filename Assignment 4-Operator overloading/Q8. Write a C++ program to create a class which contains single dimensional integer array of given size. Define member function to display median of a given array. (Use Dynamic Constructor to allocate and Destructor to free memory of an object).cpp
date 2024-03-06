/*
Q8. Write a C++ program to create a class which contains single dimensional integer array of given
size. Define member function to display median of a given array. (Use Dynamic Constructor to
allocate and Destructor to free memory of an object).
*/
#include<iostream>
using namespace std;
class box{
    private:
        // address holding pointer for array 
        int *ptr;
        int n;
    public:
        // dynamic constructor
        box(int n){
            this->ptr=new int(n);
            this->n=n;
        }
        // add values in array
        void get(){
            cout<<endl<<"get() function:"<<endl;
            for(int i=0;i<this->n;i++){
                cout<<"enter element"<<i<<" :";
                cin>>this->ptr[i];
            }
        }
        //disp array 
        void disp(){
            cout<<endl<<"disp() function:"<<endl;
            for(int i=0;i<this->n;i++){
                cout<<this->ptr[i]<<" ";
            } 
        }
        // calculate median 
        void median(){
            //  if !=0 is odd
            if(this->n%2!=0){
                int median = (n+1)/2;
                cout<<endl<<"median of ptr["<<median<<"]="<<this->ptr[median]<<endl;
            }
            // else even 
            else{
                int median = (n/2)+((n/2)+1)/2;
                cout<<endl<<"median of ptr["<<median<<"]="<<this->ptr[median]<<endl;
            }
        }
        // destuctor 
        ~box(){
            delete[] ptr;
        }
};

int main(){
    box a(5);
    a.get();
    a.disp();
    a.median();
    a.~box();
    return 0;
}
