/*
Q2.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and
Sphere.
*/

/*
Formulas:
volume of cube = side_len * side_len * side_len
volume of cylinder = pi * (radius * radius) * height
volume of Sphere = (4/3) * pi * (radius * radius * radius)
*/
#include<iostream>
#define pi 3.142
using namespace std;
class over_load{
    public:
    void volume(){
        cout<<"base method not overloaded"<<endl;
    }
    void volume(double side_len){
        cout<<"vol of cube="<<side_len * side_len * side_len<<endl;
    }
    void volume(double radius,double height){
        cout<<"vol of cylinder="<<pi * (radius * radius) * height<<endl;
    }
    void volume(double radius,float four,float three){
        cout<<"vol of sphere="<<(four/three) * pi * (radius * radius * radius)<<endl;
    }
};
int main(){
    // create obj
    over_load obj;
    double side_len=3,radius=2.5,height=3;
    obj.volume(); // function call for default
    obj.volume(side_len); // function call for cube
    obj.volume(radius,height); // function call for cylinder
    obj.volume(radius,4,3); // function call for sphere
    return 0;
}
