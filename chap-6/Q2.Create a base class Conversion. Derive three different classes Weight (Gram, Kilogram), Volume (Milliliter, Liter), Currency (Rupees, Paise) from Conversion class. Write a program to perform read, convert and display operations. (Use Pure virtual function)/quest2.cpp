/*
Q2.Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram),
Volume (Milliliter, Liter), Currency (Rupees, Paise) from Conversion class. Write a program to
perform read, convert and display operations. (Use Pure virtual function)
*/

/*
A pure virtual function is a function in C++ that has no body and is declared with the = 0 syntax. 
It is a member of an abstract class, 
which is a class that cannot be instantiated but can be used as a base class for other classes. 
Pure virtual functions are used to define an interface for the derived classes, 
which must implement the pure virtual functions in order to be concrete classes.
*/

#include<iostream>
using namespace std;

//abstract class containing pure virtual functions
class Coversion{
    public :
        //pure virtual functions
        virtual void read()=0;
        virtual void convert()=0;
        virtual void display()=0;
};

class Weight : public Coversion {
    public :
        float Gram,Kilogram;

        void read(){
            cout<<"Enter the Value in Grams:";
            cin>>this->Gram;
        }

        void convert(){
            // formula : kilograms = grams / 1000
            this->Kilogram=this->Gram/1000;
        }

        void display(){
            cout<<"Result:(Conversion of Grams to Kilograms:)"<<endl;
            cout<<"Grams:"<<this->Gram<<endl;
            cout<<"Kilograms:"<<this->Kilogram<<endl;
        }
};

class Volume : public Coversion {
    public :
        float Milliliter,Liter;

        void read(){
            cout<<"Enter the Value in Milliliter:";
            cin>>this->Milliliter;
        }

        void convert(){
            // formula : Liters = Milliliters / 1000
            this->Liter=this->Milliliter/1000;
        }

        void display(){
            cout<<"Result:(Conversion of Milliliter to Liter:)"<<endl;
            cout<<"Milliliter:"<<this->Milliliter<<endl;
            cout<<"Liter:"<<this->Liter<<endl;
        }
};

class Currency : public Coversion {
    public :
        float Rupees,Paise;

        void read(){
            cout<<"Enter the Value in Rupees:";
            cin>>this->Rupees;
        }

        void convert(){
            // formula : Paise = Rupees * 100
            this->Paise=this->Rupees*100;
        }

        void display(){
            cout<<"Result:(Conversion of Rupees to Paise:)"<<endl;
            cout<<"Rupees:"<<this->Rupees<<endl;
            cout<<"Paise:"<<this->Paise<<endl;
        }
};

int main(){
    Weight gms;
    gms.read();
    gms.convert();
    gms.display();
    Volume mil;
    mil.read();
    mil.convert();
    mil.display();
    Currency rup;
    rup.read();
    rup.convert();
    rup.display();
    return 0;
}
