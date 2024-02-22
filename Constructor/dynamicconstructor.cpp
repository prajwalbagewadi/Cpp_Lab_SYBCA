#include<iostream>
using namespace std;
class A{
    public :
    	char *ptr;
    	// dynamic constructor
    A(int size){
        ptr=new char[size];
        ptr="ab";
        cout<<"size of char="<<sizeof(char)<<endl;
       //cout<<"size of var="<<sizeof(var);
    }
    void disp(){
    	cout<<"val="<<ptr<<endl;
	}
    
};
int main(){
    A obj(2);
    obj.disp();
    return 0;
}
