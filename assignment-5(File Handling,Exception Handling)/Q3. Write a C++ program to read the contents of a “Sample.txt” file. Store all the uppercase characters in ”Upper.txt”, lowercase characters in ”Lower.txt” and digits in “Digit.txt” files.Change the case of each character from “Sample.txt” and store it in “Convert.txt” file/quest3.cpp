/*
Q3. Write a C++ program to read the contents of a “Sample.txt” file. Store all the uppercase
characters in ”Upper.txt”, lowercase characters in ”Lower.txt” and digits in “Digit.txt”
files.Change the case of each character from “Sample.txt” and store it in “Convert.txt” file.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream read_obj,write_obj,write_obj1,write_obj2,write_obj3;
    read_obj.open("sample.txt",ios::in);
    write_obj.open("upper.txt",ios::out);
    write_obj1.open("lower.txt",ios::out);
    write_obj2.open("digit.txt",ios::out);
    write_obj3.open("convert.txt",ios::out);

    char buf;
    while (!read_obj.eof()){
        read_obj.get(buf);
        //upper
        if(isupper(buf)){
            write_obj<<buf;
            write_obj3.put(tolower(buf));
        }
        //lower
        if(islower(buf)){
            write_obj1<<buf;
            write_obj3.put(toupper(buf));
        }
        //digit
        if(isdigit(buf)){
            write_obj2<<buf;
        }
    }
    
    read_obj.close();
    write_obj.close();
    write_obj1.close();
    write_obj2.close();
    write_obj3.close();
    return 0;
}
