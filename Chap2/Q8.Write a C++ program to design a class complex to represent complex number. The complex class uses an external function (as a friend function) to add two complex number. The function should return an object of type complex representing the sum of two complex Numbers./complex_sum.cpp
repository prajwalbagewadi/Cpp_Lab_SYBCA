/*
Q8.Write a C++ program to design a class complex to represent complex number. The complex
class uses an external function (as a friend function) to add two complex number. The function
should return an object of type complex representing the sum of two complex Numbers.
*/

/*
complex numbers :
    square root of -9:
    square root -9 = square root 9 * square root -1      i (imaginary number) = square root -1 
                        3                i              imaginary numbers are  angular shifts in the horizonatal real number line
                                                                5i
    square root -9  =  3i                                       4i         (3+4i) angle__ 3(realpart) 4i(imaginary)
    square root 9 = 3 * 3                                               
    square root 9 = -3 *-3                                      3i
                                                                2i
                                                                i
                                            -5  -4  -3  -2  -1  0   1   2   3   4   5 
                                                                -i
                                                                -2i
                                                                -3i
                                                                -4i
                                                                -5i   
*/ 

/*
First, we need to understand what we need to do, which is add two complex numbers, like so:
    1)add the real numbers
    2)add the imaginary numbers
    3)sum of real numbers + sum of imaginary numbers(i)
*/

#include<iostream>
using namespace std;

class complex_num{
    private :
        int real_part;
        int img_part;
    public :
        complex_num(){
           cout<<"cmplex_num="<<real_part<<"+"<<img_part<<"i"<<endl; 
        }
        complex_num(int r,int i){
            real_part=r;
            img_part=i;
            cout<<"cmplex_num="<<real_part<<"+"<<img_part<<"i"<<endl;
        }

    // to return a obj we declare return type as class_name(as its return type)
    friend complex_num sum_cmplex_num(complex_num &obj1,complex_num &obj2);  

   
};

complex_num sum_cmplex_num(complex_num &obj1,complex_num &obj2){
        
    // 1)add the real numbers
        int sumof_realpart=obj1.real_part+obj2.real_part;

    // 2)add the imaginary numbers
        int sumof_imgpart=obj1.img_part+obj2.img_part;

    /*
        how to return a object :
        object = return object_name;
        create a result object by initalizing the result values into the object 
        and  then return the object;
    */
    //  3)sum of real numbers + sum of imaginary numbers(i) combine real and img parts
    //   return obj declaration
        complex_num result_obj(sumof_realpart,sumof_imgpart);
            
        return result_obj;

    }

int main(){
    cout<<"opr_nd1=";
    complex_num oprnd1(2,3);
    cout<<endl;
    cout<<"opr_nd2=";
    complex_num oprnd2(2,3);
    cout<<endl;
    cout<<"result=";
    complex_num result=sum_cmplex_num(oprnd1,oprnd2);
    cout<<endl;
    return 0;
}
