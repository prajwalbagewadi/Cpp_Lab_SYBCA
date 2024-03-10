/*
Q1. Write a C++ program to copy the contents of one file to another
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // create fstream object 
        fstream input_file,output_file;
    // open the input file to read
        input_file.open("i.txt",ios::in);
    // open new file in write mode to write contents
        output_file.open("o.txt",ios::out);
    // while loop to read all contents and writing contents to new file
        string var;
        while(!input_file.eof()){
            getline(input_file,var);
            cout<<var<<endl;
            output_file<<var<<endl;
        }
    //close the files
        input_file.close();
        output_file.close();
    return 0;
}
