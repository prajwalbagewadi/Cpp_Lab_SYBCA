/*
Q2.Write a C++ program to create a class Item with data members Item_code, Item_name,
Item_Price.
Write member functions to accept and display item information and also display number of
objects Created for a class. (Use Static data member and Static member function)
*/
    /*
    static data member:
    Static data members are class members that are declared using the static keyword. 
    There is only one copy of the static data member in the class, even if there are many class objects. 
    This is because all the objects share the static data member. 
    The static data member is always initialized to zero when the first class object is created.
    */
    /*
    static member function:
    Static member functions do not have access to the instance-specific data members 
    and can be called using the class name, without creating an instance. 
    They are often used for tasks that don't depend on a particular instance of the class.
    */
    /*
    In your class, the var member is a static string. 
    It's generally a good practice to initialize static members outside the class definition. 
    You can add a line outside the class to initialize it.
    */

// #include<iostream>
// #include<string>
// using namespace std;
// class item{
//     private:
//         static int item_code;
//         static string item_name;
//         static float item_price;
//         static int item_count;   
//     public:
//         static void accept(int i_code,string i_name,float i_price){
//             item_code=i_code;
//             item_name=i_name;
//             item_price=i_price;
//             item_count++;
//         }
//         static void display(){
//             cout<<"item_code="<<item_code<<endl;
//             cout<<"item_name="<<item_name<<endl;
//             cout<<"item_price="<<item_price<<endl;
//             cout<<"item_count="<<item_count<<endl;
//         }

// };
// //initialize static members outside the class definition
// int item::item_code=0;
// string item::item_name="";
// float item::item_price=0.00;
// int item::item_count=0;
// // main function
// int main(){
//     item::accept(112,"kitkat",20.00);
//     item::display();
//     item::accept(113,"sneakers",40.00);
//     item::display();
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
class item{
    private:
        int item_code;
        string item_name;
        float item_price;
        static int item_count;   
    public:
        void accept(int i_code,string i_name,float i_price){
            item_code=i_code;
            item_name=i_name;
            item_price=i_price;
            //item_count++;
        }
        void display(){
            cout<<"item_code="<<item_code<<endl;
            cout<<"item_name="<<item_name<<endl;
            cout<<"item_price="<<item_price<<endl;
            //cout<<"item_count="<<item_count<<endl;
        }
        static void obj_count(){
            item_count++;
            cout<<"obj_count="<<item_count<<endl;
        }

};
//initialize static members outside the class definition
// int item::item_code=0;
// string item::item_name="";
// float item::item_price=0.00;
int item::item_count=0;
// main function
int main(){
    // item::accept(112,"kitkat",20.00);
    // item::display();
    // item::accept(113,"sneakers",40.00);
    // item::display();
        item obj1;
        obj1.accept(112,"kitkat",20.00);
        obj1.display();
        item::obj_count();
        item obj2;
        obj2.accept(113,"sneakers",40.00);
        obj2.display();
        item::obj_count();
    return 0;
}
