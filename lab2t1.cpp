#include<iostream>
using namespace std;
int main(){
    const int DAYS=5;
    int sales[5]; //the size of array is fixed, 5 days
    int* p=sales; //pointer p points to sales[0]
    for(int i=0; i<DAYS; i++){ //for loop to read 5 values using pointer
        cout<<"Day "<<(i+1)<<": ";
        cin>>*(p+i);
    }
    int total=0; //initialized total variable to 0
    for(int i=0; i<DAYS; i++) { //for loop to show values+total
        cout<<"Day "<<(i+1)<<": "<<*(p+i)<<endl;
        total+=*(p+i);
    }
    cout<<"Total: "<<total<<endl;
    *(p+2)+=2; //added 2 to day 3(index 2)through pointer
    total=0;
    for(int i=0; i<DAYS; i++){ //for loop to show updated values+total
        cout<<"Day "<<(i+1)<<": "<<*(p+i)<<endl;
        total+=*(p+i);
    }
    cout<<"Updated Total: "<<total<<endl;
    return 0;
}
/* Explanations:
   p : address of sales[0]
   &p : address of pointer variable p itself
   *p : value at sales[0]
   *(p + 2) : value at sales[2]
   Valid indices: 0-4. *(p+5) is out of bounds, and will give undefined behavior.
*/