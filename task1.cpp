#include<iostream>
using namespace std;
int main(){ //main function
int numbers[5]={2,4,6,8,10}; //created an array of 5 integers
numbers[2]=7; //changed third element from 6 to 7
for(int i=0; i<5; i++){ //for loop to print the array with spaces
    cout<<numbers[i]<<" ";
}
cout<<endl;
return 0;
}
//Predicted Output: 2 4 7 8 10
