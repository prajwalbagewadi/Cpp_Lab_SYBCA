/*
Q3.Write a C++ program to sort integer and float array elements in ascending order by using
function overloading.
*/

/*
Bubble Sort Algorithm:
1)Start from the beginning of the list.
2)Compare the current element with the next one.
3)If the current element is greater than the next one, swap them.
4)Move to the next pair of elements and repeat steps 2-3 until you reach the end of the list.
5)After the first pass, the largest element will be at the end of the list.
6)Repeat steps 1-5 for the remaining unsorted elements (excluding the last one) until the entire list is sorted
*/
#include<iostream>
#include<iomanip>
using namespace std;
class sort{
    public:
    void sorter(int arr[],int size){
    	cout<<endl<<"integer array sort:"<<endl;
    	//sorting logic
        for(int pass=0;pass<size;pass++){
            for(int e=0;e<size-pass-1;e++){
                if(arr[e] > arr[e+1]){
                    // swap logic
                 	int temp=arr[e];
                 	arr[e]=arr[e+1];
                 	arr[e+1]=temp;
                }
            }
        }
    }
    void sorter(float arr[],int size){
    	cout<<endl<<"float array sort:"<<endl;
    	//sorting logic
        //cout << setprecision(4);
        for(int pass=0;pass<size;pass++){
            for(int e=0;e<size-pass-1;e++){
                if(arr[e] > arr[e+1]){
                    // swap logic
                 	float temp=arr[e];
                 	arr[e]=arr[e+1];
                 	arr[e+1]=temp;
                }
            }
        }
    }
    // display logic for int
    void disp(int arr[],int size){
    	cout<<"\n";
    	for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
	}
	// display logic for float
	 void disp(float arr[],int size){
    	cout<<"\n";
    	for(int i=0;i<size;i++){
    		//cout << setprecision(4);
            cout<<fixed<<arr[i]<<" ";
        }
	}
};
int main(){
    int int_arr[5]={2,3,5,6,1};
    float num1=5.22,num2=3.44,num3=6.99,num4=2.12,num5=1.23;
    //float float_arr[5]={2.4325,3.2345,1.23332,6.22444,1.3444};
    float float_arr[5]={num1,num2,num3,num4,num5};
	//cout<<num;
    sort obj;
    int size1=sizeof(int_arr)/sizeof(int_arr[0]);
    int size2=sizeof(float_arr)/sizeof(float_arr[0]);
    cout<<"size1="<<size1<<endl;
    cout<<"size2="<<size2<<endl;
    cout<<endl<<"original arr:"<<endl;
    obj.disp(int_arr,size1);
   	obj.sorter(int_arr,size1);
    obj.disp(int_arr,size1);
     cout<<endl<<"original arr:"<<endl;
    obj.disp(float_arr,size1);
    obj.sorter(float_arr,size2);
    obj.disp(float_arr,size2);
    return 0;
}
