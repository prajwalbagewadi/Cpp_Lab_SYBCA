/*
Q5. Create a class Book containing Book_name, author and Price as a data member and write
necessary member functions for the following (use function overloading).
a. To Accept and display the Book Information.
b. Display book details of a given author
c. Display book details of specific price
*/
#include<iostream>
#include<string>
using namespace std;
class Book{
    string book_name;
    string author;
    float price;
    public :
        void accept_disp(string bname,string aname,float p){
            book_name=bname;
            author=aname;
            price=p;
        }
        void accept_disp(){
            cout<<endl<<"BOOk INformation:"<<endl;
            cout<<endl<<"BOOk Name:"<<book_name<<endl;
            cout<<endl<<"BOOk Author:"<<author<<endl;
            cout<<endl<<"BOOk price:"<<price<<endl;
        }
        void search_book(string aname){
            if(this->author==aname){
                this->accept_disp();
            }
        }
        void search_book(float price){
            if(this->price==price){
                this->accept_disp();
            }
        }
};
int main(){
    Book obj[3];
//  obj[0].accept_disp("C++ Programming Language, The 4th Edition, Kindle Edition"," Stroustrup Bjarne",3,654.47);
//  obj[1].accept_disp("Think Like a Programmer: An Introduction to Creative Problem Solving Paperback – Illustrated, 12 August 2012"," V. Anton Spraul",1,559);
    int menu;
    string name;
    float price;
    do{
        cout<<endl<<"1. To Accept the Book Information."<<endl;
        cout<<endl<<"2. To Display the Book Information."<<endl;
        cout<<endl<<"3. To Search by Author the Book Information."<<endl;
        cout<<endl<<"4. To Search by price the Book Information."<<endl;
        cout<<endl<<"5. To exit."<<endl;
        cout<<endl<<"select option:";
        cin>>menu;
        switch(menu){
            case 1:
                for(int i=0;i<3;i++){
                    string bname,aname;
                    float price1;
                    cout<<"Enter Book_name:";
                    cin>>bname;
                    cout<<"Enter Book_author:";
                    cin>>aname;
                    cout<<"Enter Book_price:";
                    cin>>price1;
                    obj[i].accept_disp(bname,aname,price1);
                }
                break;
            case 2:
                for(int i=0;i<3;i++){
                    obj[i].accept_disp();
                }
                break;
            case 3:
                cout<<endl<<"enter Author name to search:";
                cin>>name;
                for(int i=0;i<3;i++){
                    obj[i].search_book(name);   
                }
                break;
            case 4:
                cout<<endl<<"enter book price to search:";
                cin>>price;
                for(int i=0;i<3;i++){
                    obj[i].search_book(price);  
                }
                break;
            case 5:
                exit(0);
        }
    }while(menu!=5);
        
    return 0;
}
