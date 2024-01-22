/*
Q5.Write a C++ program to create a class Date which contains three data members as
dd,mm,yyyy. Create and initialize the object by using parameterized constructor and display date
in dd-month-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for
month.
*/
#include<iostream>
#include<string>
//#include<ctime>
using namespace std;
class date{
    private:
        int day; // 1-31 days
        int month; // 1-12 months
        int year; //  1970 - 2525/
        struct Date{
                int d;
                int m;
                int y;
            };
        struct Date Date;  
    public :
        date(int d,int m,int y){
            day=d;
            month=m;
            year=y;
        }    
        void date_validation(){
            
            if(day>=1 && day<=31){
                Date.d=day;
                cout<<day<<endl;
            }
            if(month>=1 && month<=12){
                Date.m=month;
                cout<<month<<endl;
            }
            if(year>=1970 && year<=2525){
                Date.y=year;
                cout<<year<<endl;
            }
        }
        void output(){
            string Month;
            switch(Date.m)
            {
                case 1:
                    Month="Jan";
                break;
                case 2:
                    Month="Feb";
                break;
                case 3:
                    Month="Mar";
                break;
                case 4:
                    Month="Apr";
                break;
                case 5:
                    Month="May";
                break;
                case 6:
                    Month="Jun";
                break;
                case 7:
                    Month="Jul";
                break;
                case 8:
                    Month="Aug";
                break;
                case 9:
                    Month="Sep";
                break;
                case 10:
                    Month="Oct";
                break;
                case 11:
                    Month="Nov";
                break;
                case 12:
                    Month="Dec";
                break;
            }
            cout<<"input Date:"<<day<<"-"<<date::month<<"-"<<year<<endl;
            //cout<<"a="<<Date.d;
            //cout<<"b="<<Date.m;
            //cout<<"c="<<Date.y;
            cout<<"output Date:"<<Date.d<<"-"<<Month<<"-"<<Date.y<<endl;
        }    

};
int main(){
      date obj(22,01,2023);
      obj.date_validation();
      obj.output();
}
