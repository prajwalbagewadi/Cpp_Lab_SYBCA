/*
Q1. Create a class Fraction containing data members as Numerator and Denominator. Write a
program to overload operators ++ , -- and * to increment, decrement a Fraction and multiply two
Fraction respectively. (Use constructor to initialize values of an object)
*/
#include<iostream>
using namespace std;

class Fraction{
    private:
        int Numerator; //number of parts we have
        int Denominator; // total parts in hole
    public:
        //constructor
        Fraction(int N,int D){
            Numerator=N;
            Denominator=D;
        }
/*
If you have a fraction a/b nd you want to increment it by a constant c , the new fraction a'/b'
can be calculated using the following formulas:
1)Incrementing the numerator:
a'=a+c
b'=b
2)Incrementing the Denominator:
a'=a
b'=b+c
3)Incrementing both numerator and denominator:
a'=a+c
b'=b+c

If you have a fraction a/b nd you want to decrement it by a constant c , the new fraction a'/b'
can be calculated using the following formulas:
1)Decrementing the numerator:
a'=a-c
b'=b
2)Decrementing the Denominator:
a'=a
b'=b-c
3)Decrementing both numerator and denominator:
a'=a-c
b'=b-c

the formula for multiplying fractions is:
(a / b) * (c / d) = (a * c) / (b * d)
*/
		// example for unary operator overloading
		// increament fraction 
        void operator ++(){
            this->Numerator++;
            this->Denominator++;
            cout<<"Increament="<<"\n"<<this->Numerator<<"\n"<<"_"<<"\n"<<this->Denominator<<endl;
            
        }
        
        // example for unary operator overloading
        // Decreament fraction
        void operator --(){
            this->Numerator--;
            this->Denominator--;
            cout<<"Decreament="<<"\n"<<this->Numerator<<"\n"<<"_"<<"\n"<<this->Denominator<<endl;
        }
    
    	// example for binary operator overloading
    	// multiply fraction
    	void operator *(Fraction &obj){
    		Fraction res_obj(0,0);
    		res_obj.Numerator=this->Numerator*obj.Numerator;
    		res_obj.Denominator=this->Denominator*obj.Denominator;
    		cout<<"Multiplication result="<<"\n"<<res_obj.Numerator<<"\n"<<"_"<<"\n"<<res_obj.Denominator<<endl;
		}
		void display_fraction(){
			cout<<"fraction="<<"\n"<<this->Numerator<<"\n"<<"_"<<"\n"<<this->Denominator<<endl;	
		}
    	
};

int main(){
	Fraction f1(2,4);
	Fraction f2(2,4);
	f1.display_fraction();
	f2.display_fraction();
	++f1;
	--f2;
	f1*(f2);
    return 0;
}
