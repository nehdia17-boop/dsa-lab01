#include<iostream>
using namespace std;
int main(){ //main function
int numbers[5]; //declared an array of 5 integers
int total=0; //initialized a variable total to 0
cout<<"Enter 5 integers: ";
for(int i=0; i<5; i++){ //for loop to read 5 integers into array
    cin>>numbers[i];
}
for(int j=0; j<5; j++){ //for loop to sum all 5 integers
    total=total+numbers[j];
}
cout<<"Total: "<<total<<endl;
return 0;
}
/*Tracing the whole program for test 1:
Input: 1 2 3 4 5    Expected total: 15
i | numbers[i] | total
0 | 1          |1
1 | 2          |3
2 | 3          |6
3 | 4          |10
4 | 5          |15
Actual total: 15

For test 2:
Input: 0 0 0 0 0    Expected total: 0,  Actual total: 0

For test 3:
Input: -2 4 -1 0 3    Expected total: 4,  Actual total: 4*/