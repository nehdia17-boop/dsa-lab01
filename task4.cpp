#include<iostream>
using namespace std;
int main(){ //main function
int array[8]; //declared an array of 8 integers
cout<<"Enter 8 integers: ";
for(int i=0; i<8; i++){ //for loop to read 8 integers into array
    cin>>array[i];
}
//finding min index and max index
int max=0, min=0; //initialized min and max index to 0
for(int i=0; i<8; i++){ //for loop to update max and min
    if(array[i]>array[max]){
        max=i;
    }
    if(array[i]<array[min]){
        min=i;
    }
}
cout<<"Max value: "<<array[max]<<" and index: "<<max<<endl;
cout<<"Min value: "<<array[min]<<" and index: "<<min<<endl;
return 0;
}