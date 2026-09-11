#include<iostream>
using namespace std;
int main(){ //main function
    int numbers[10]; //declared an array of 10 integers
    cout<<"Enter 10 integers: ";
    for(int i=0; i<10; i++){ //for loop to read 10 integers into array
        cin>>numbers[i];
    }
    int uniqueCount=0; //uniqueCount shows number of distinct values yet
        for(int i=0; i<10; i++){ //for loop to go through array
        bool alreadyExists=false;
        for(int j=0; j<uniqueCount; j++) //check if value is already among the unique values stored at start
        {
            if(numbers[i]==numbers[j])
            {
                alreadyExists=true;
                break;
            }
        }
        if(alreadyExists==false) //if the value has not been seen yet, put it in next position of array
        {
            numbers[uniqueCount]=numbers[i];
            uniqueCount++;
        }
    }
    cout<<"Unique values: ";
    for(int i=0; i<uniqueCount; i++) //for loop to display unique values
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    cout<<"Count: "<<uniqueCount<<endl;
    return 0;
}