/*
Q2. Write a C++ program to read the contents of a text file. Count and display number of
characters ,words and lines from a file.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // create fstream object
    fstream obj_read;
    
    // open file in read mode
    obj_read.open("i.txt",ios::in);
    
    //loop to access the file contents

    // reader string buf
    char buf;
    //counters
    int words=0,lines=0,chars=0;
    while(!obj_read.eof()){

        obj_read.get(buf);
        if(buf=='\n'){
            cout<<"line:"<<endl;
            lines+=1;
            cout<<buf<<endl;
        }
        if(buf==' '||buf=='\n'){
            cout<<"word:"<<endl;
            words+=1;
            cout<<buf<<endl;
        }
        if(buf!=' ' && buf!='\n'){
            cout<<"char:"<<endl;
            chars+=1;
            cout<<buf<<endl;
        }
        
    }
    cout<<endl<<"number of lines:"<<lines<<endl;
    cout<<endl<<"number of words:"<<words<<endl;
    cout<<endl<<"number of chars:"<<chars<<endl;
    return 0;
}
