/*
Q4. Write a C++ program to define a class Bus with the following specifications: Bus No, Bus
Name, No of Seats, Starting point, Destination .Write a menu driven program by using
appropriate manipulators to a. Accept details of n buses. b. Display all bus details. c. Display
details of bus from specified starting point to destination (Use Array of Objects)
*/
#include<iostream>
#include<string>
using namespace std;
class bus
{
    private :
    int bus_no;
    string bus_name;
    int seats;
    string start_point;
    string dest;

    public :
    void getdata();
    void dispdata();
    void search_start(string temp,int n);

};
void bus::getdata()
{
    cout<<"\n";
    cout<<"enter the foll details for bus:"<<endl;
    cout<<"enter bus_no:";
    cin>>bus_no;
    cout<<"enter bus_name:";
    cin>>bus_name;
    cout<<"enter seats:";
    cin>>seats;
    cout<<"enter start_point:";
    cin>>start_point;
    cout<<"enter dest:";
    cin>>dest;
    cout<<"\n";
}
void bus::dispdata()
{
    cout<<"\n";
    cout<<"Details for bus:"<<endl;
    cout<<"Bus_no:"<<bus_no<<endl;
    cout<<"Bus_name:"<<bus_name<<endl;
    cout<<"seats:"<<seats<<endl;
    cout<<"start_point:"<<start_point<<endl;
    cout<<"dest:"<<dest<<endl;
    cout<<"\n";
}
void bus::search_start(string temp,int n)
{
        cout<<"\n";
        if(this->start_point==temp)
        {
            this->dispdata();
        }
        cout<<"\n";
}

int main()
{
    int n,menu;
    cout<<"enter no of Buses:";
    cin>>n;
    bus obj[n];
    cout<<"\nSelect option from menu:"<<endl;
    do
    {
       cout<<"Enter Bus details:1"<<endl; 
       cout<<"See Bus details:2"<<endl;
       cout<<"search Bus with start_point:3"<<endl;
       cout<<"Exit:4"<<endl;
       cout<<"select:";
       cin>>menu;
       string start;
       switch(menu)
       {
            case 1:
            cout<<"\n";
            for(int i=0;i<n;i++)
            {
                obj[i].getdata();
            }
            break;
            case 2:
            cout<<"\n";
            for(int i=0;i<n;i++)
            {
                obj[i].dispdata();
            }
            break;
            case 3:
            cout<<"\n";
            cout<<"enter start_point:";
            cin>>start;
            for(int i=0;i<n;i++)
            {
                obj[i].search_start(start,n);
            }
            
            break;
            case 4:exit(0);
       } 

    }while(menu!=4);
    return 0;
}
