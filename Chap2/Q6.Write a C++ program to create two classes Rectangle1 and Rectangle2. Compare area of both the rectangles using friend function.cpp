/*
Q6.Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both
the rectangles using friend function.
*/
#include<iostream>
using namespace std;
class Rectange{
private:
int height,width;
public:
// default constructor
Rectange()
{
    
}
//parameterized constructor
Rectange(int h,int w){
    height=h;
    width=w;
}

int calculate_area(){
    int rectangle_area=height*width;
    return rectangle_area;
}

//friend function declaration:
friend void compare_area(Rectange &obj);

};

void compare_area(Rectange &obj1,Rectange &obj2){
    int area1=obj1.calculate_area();
    int area2=obj2.calculate_area();
    if(area1>area2){
        cout<<"area1="<<area1<<" is "<<"Greater than area2="<<area2<<endl;
    }
    else {
        cout<<"area2="<<area2<<" is "<<"Greater than area1="<<area1<<endl;
    }
}


int main(){
    Rectange rect1(3,2),rect2(5,2);
    rect1.calculate_area();
    rect2.calculate_area();
    compare_area(rect1,rect2);
    return 0;
}
