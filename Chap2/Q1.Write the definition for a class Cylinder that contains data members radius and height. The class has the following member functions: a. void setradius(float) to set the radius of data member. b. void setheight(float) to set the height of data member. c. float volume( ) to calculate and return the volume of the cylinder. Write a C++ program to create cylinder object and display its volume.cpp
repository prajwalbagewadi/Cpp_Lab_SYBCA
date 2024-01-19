/*
Q1.Write the definition for a class Cylinder that contains data members radius and height. The
class has the following member functions:
a. void setradius(float) to set the radius of data member.
b. void setheight(float) to set the height of data member.
c. float volume( ) to calculate and return the volume of the cylinder.
Write a C++ program to create cylinder object and display its volume.
*/
#include<iostream>
using namespace std;
class cylinder 
{
    private:
        float radius;
        float height;
    public:
        void setradius(float r){
            radius=r;
        }
        void setheigth(float h){
            height=h;
        }      
        float volume(){
            float vol = 3.142*radius*radius*height;
            return vol; 
        }
};
int main()
{
    cout<<"find vol of Cylinder:"<<endl;
    float r,h;
    cout<<"enter radius and height:";
    cin>>r>>h;
    class cylinder obj;
    obj.setradius(r);
    obj.setheigth(h);
    float vol=obj.volume();
    cout<<"Vol of the cylinder is:"<<vol<<endl;
    return 0;
}
