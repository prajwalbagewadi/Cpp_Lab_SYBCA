/*
Q4.Write a C++ program to implement a class ‘student’ to overload following functions as
follows:
a. int maximum(int, int) – returns the maximum score of two students
b. int maximum(int *a, int arraylength) – returns the maximum score from an array ‘a'.
*/
#include<iostream>
using namespace std;
class student{
    public:
        int maximum(int s1,int s2){
            return (s1>s2) ? s1 : s2;
        }
        /* 	logic:
			eg for accessing arr using ptr
            void print_array(int *ptr, int size) {
                for (int i = 0; i < size; i++) {
                     printf("%d ", ptr[i]);
                }
                printf("\n");
             }
             // dereference of *ptr using ptr[index] 
        */
        int maximum(int *ptr,int arraylenght){
            int max=ptr[0];
            cout<<"max="<<max<<endl;
             for(int i=0;i<arraylenght;i++){
                 if(ptr[i]>max){
                    max=ptr[i];
                    cout<<"max="<<max<<endl;
                 }
             }
             return max;
        }
};
int main(){
    student obj;
    int stud1=20,stud2=30;
    int res1=obj.maximum(stud1,stud2);
    cout<<"max score of two students:"<<res1<<endl;
    int arr[5]={15,25,254,45,56};
    int res2=obj.maximum(arr,5);
    cout<<"max score of five students:"<<res2<<endl;
    return 0;
}
