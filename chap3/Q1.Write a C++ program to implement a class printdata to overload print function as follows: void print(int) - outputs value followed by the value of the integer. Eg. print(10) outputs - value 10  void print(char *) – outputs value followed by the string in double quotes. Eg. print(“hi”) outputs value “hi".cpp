/*
Function overloading:
Q1.Write a C++ program to implement a class printdata to overload print function as follows:
void print(int) - outputs value followed by the value of the integer. Eg. print(10) outputs - value 10 
void print(char *) – outputs value followed by the string in double quotes. Eg. print(“hi”)
outputs value “hi".
*/
#include<iostream>
#include<string>
using namespace std;
//class declaration
class printdata{
	public:
    void print(int data){
        cout<<data; 
    }
    /*
    	The char* in cpp is a pointer used to point to the first character of the character array. 
		The char* is usually used to iterate through a character array.
		Using char* Here, str is basically a pointer to the (const)string literal.
		
		1. Only one pointer is required to refer to whole string. That shows this is memory efficient.
		2. No need to declare the size of string beforehand.
		
		The syntax of the char* in C++ is as follows:
		char* str = "This is an example string";
	*/
    void print(char *ptr){
    	cout<<ptr;
	}
};
int main(){
// 	char var[20]="shobha mam";
// 	int data=20;
	//class object creation
	printdata obj;
	cout<<"printing string using print():";
	obj.print("shobha mam");
	cout<<endl;
	cout<<"printing int using print():";
	obj.print(12);
	cout<<endl;
    return 0;
}
