/*
Q3.Create a class String which contains a character pointer (Use new and delete operator). Write a
C++ program to overload following operators:
a. < To compare length of two strings
b. == To check equality of two strings
c. + To concatenate two strings
d. ! To reverse the case of each alphabet from given string
e. [ ] To print a character present at specified index [20]
*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class String{
    public:
        char *ptr1;
    //default constructor
    String(){

    }
    // dynamic constructor
    String(char *c){
        ptr1=new char[strlen(c)+1];
        ptr1=c;
        cout<<endl<<"val="<<ptr1<<" "<<"addr="<<&ptr1<<endl;
        cout<<endl<<" Lenof ptr1="<<strlen(ptr1)<<endl;
    }
    //operator overload <
    void operator <(String obj){
        int val1,val2;
        val1=strlen(this->ptr1);
        val2=strlen(obj.ptr1);
        (val1<val2)?cout<<this->ptr1<<" is smaller than"<<obj.ptr1<<endl:cout<<this->ptr1<<" is longer than"<<obj.ptr1<<endl;
    }
    //operator overload ==
    void operator ==(String obj){
        int val1,val2;
        val1=strlen(this->ptr1);
        val2=strlen(obj.ptr1);
        (val1==val2)?cout<<this->ptr1<<" is equal to "<<obj.ptr1<<endl:cout<<this->ptr1<<" is not equal to "<<obj.ptr1<<endl;
    }
    //operator overload +
    String operator +(String obj){
        int len1=strlen(this->ptr1);
        int len2=strlen(obj.ptr1);
        char *result=new char[len1+len2+1];
        //copy the contents of this->ptr1 to result
        strcpy(result,this->ptr1);
        //concat the contents of obj.ptr1 to result
        strcat(result,obj.ptr1);
        String res(result);
        //cout<<result;
        cout<<"deallocating result char array:"<<endl;
        delete[] result;
        return res;
    }
    //operator overload !
    void operator !(){
        cout<<"!in operator"<<endl;
        cout<<"len of char*="<<strlen(this->ptr1)<<endl;
        char c;
        char *temp=new char[strlen(this->ptr1)+1];
        int i=0;
        while(i<strlen(this->ptr1)){
            cout<<"char before="<<this->ptr1[i]<<endl;
            if(isalpha(this->ptr1[i])){
                c=isupper(this->ptr1[i])?tolower(this->ptr1[i]):toupper(this->ptr1[i]);
                cout<<"char after="<<c<<endl;    
                temp[i]+=c;
            }
            else{
               cout<<"char after="<<c<<endl; 
               temp[i]+=c;
            }
            i++;
        }
        cout<<endl<<temp<<endl;
        cout<<"deallocating temp char array:"<<endl;
        delete[] temp;
    }
    //operator overload [] (subscript operator)
    void operator [](int n){
        cout<<"char at specified indice="<<this->ptr1[n]<<endl;
    }
    //destructor
    // ~String(){
    //     cout<<"Destructor invoked:"<<endl;
    //     cout<<"deallocating char array ptr1:"<<endl;
    //     delete[] ptr1;
    // }
    /*
        This “Munmap_Chunk(): Invalid Pointer” error mainly occurs due to syntax error or when the array syntax is wrong. 
        Moreover, it also happens when the wrong memory with malloc is written. 
        Undefined behavior of the code also results in this error.
    */
};
int main(){
    String obj1("PRIYA");
    String obj2("priya");
    //a. < To compare length of two strings
    cout<<endl<<"a. < To compare length of two strings"<<endl;
    obj1<obj2;
    //b. == To check equality of two strings
    cout<<endl<<"b. == To check equality of two strings"<<endl;
    obj1==obj2;
    //c. + To concatenate two strings
    cout<<endl<<"c. + To concatenate two strings"<<endl;
    String ans=obj1+obj2;
    obj1+obj2;
    cout<<ans.ptr1<<endl;
    //d. ! To reverse the case of each alphabet from given string
    cout<<endl<<"d. ! To reverse the case of each alphabet from given string"<<endl;
    !obj1;
    //e. [ ] To print a character present at specified index [20]
    cout<<endl<<"e. [ ] To print a character present at specified index [20]"<<endl;
    obj1[2];
    // obj1.~String();
    // obj2.~String();
    return 0;
}
