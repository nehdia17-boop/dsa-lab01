#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    if(n<1 || n>10){ //validated before allocating
        cout<<"Error: n must be 1-10."<<endl;
        return 0;
    }
    int* marks=new int[n]; //dynamic array on the heap
    for(int i=0; i<n; i++){
        cout<<"Student "<<(i+1)<<": ";
        cin>>*(marks+i);
    }
    int total=0, passCount=0;
    for(int i=0; i<n; i++){
        cout<<*(marks+i)<<" ";
        total+=*(marks+i);
        if(*(marks+i)>=50) passCount++;
    }
    cout<<endl;
    double average=(double)total/n; //cast to keep decimals
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Passed(>=50): "<<passCount<<endl;
    delete[] marks; //free the heap memory
    marks=nullptr; // avoid a dangling pointer
    return 0;
}
/* Explanations:
   - 'marks' is a pointer variable,and the n integers are a separate heap block.
   - new int[n] works because heap size can depend on a runtime value,
     int marks[n] doesn't compile because stack array size must be a
     compile-time constant.
*/