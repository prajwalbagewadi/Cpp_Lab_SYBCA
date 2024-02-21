/*
Q2. Write a C++ program to create a class Distance which contains data members as kilometer,
meter. Write a program to perform the following functions
a.To accept distance
b.To display distance
c. To overload > operator to compare two distance
*/
#include<iostream>
using namespace std;

class Distance{
    private:
        int kilometer;
        int meter;
    public:
        void accept(){
            cout<<"Enter Value for Kilometer:";
            cin>>kilometer;
            cout<<"Enter Value for Meter:";
            cin>>meter;
        }
        int display(){
            cout<<"value of kilometer:"<<kilometer<<endl;
            cout<<"value of meter:"<<meter<<endl;
            /*
            The formula to calculate distance using kilometers and meters is:

            Total Distance = Distance in Kilometers × 1000 + Distance in Meters

            This formula takes into account that 1 kilometer is equal to 1000 meters. 
            So, you multiply the distance in kilometers by 1000 to convert it to meters, 
            and then add the distance in meters to get the total distance.
            */
            int total_distance=kilometer*1000+meter;
            cout<<"Total distance="<<total_distance<<endl;
            return total_distance;
        }
        // binary operator overloading
        void operator >(Distance &obj){
            int distance1=this->display();
            int distance2=obj.display();

            if(distance1>distance2){
                cout<<"distance_1 is Greater than distance_2"<<endl;
            }
            else{
                cout<<"distance_1 is Less than distance_2"<<endl;
            }
        } 
};

int main(){
    Distance obj1,obj2;
    obj1.accept();
    obj2.accept();
    obj1>(obj2);
    return 0;
}
