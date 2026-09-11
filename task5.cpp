#include<iostream>
using namespace std;


void reverse(int arr[], int start, int end){
    //base case
    if(start>=end){
        return;
    }
    //swapping elements
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    //reverse the mid part that's left
    reverse(arr, start+1, end-1);
}


int main(){
    int arr[6];
    cout<<"Enter 6 integers: ";
    for(int i=0; i<6; i++){ //for loop to read 6 integers into array
    cin>>arr[i];
    }
    //calling reverse function
    reverse(arr,0,5);
    for(int i=0; i<6; i++){ //for loop to print reversed array
    cout<<arr[i]<<" "<<endl;
    }
    return 0;
}