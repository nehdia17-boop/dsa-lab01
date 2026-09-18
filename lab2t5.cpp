#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Existing students: "; 
    cin>>n;
    if(n<1 || n>10){cout<<"Error"<<endl; return 0;}
    int* marks=new int[n];
    for(int i=0; i<n; i++) 
    cin>>*(marks+i);
    int* bigger=new int[n+1]; // bigger block
    for(int i=0; i<n; i++)
        *(bigger+i)=*(marks+i); // copied old values
    cin>>*(bigger+n); // read the new mark
    delete[] marks; // freed old block
    marks=bigger; // pointed to the new block
    n=n+1;
    for(int i=0; i<n; i++)
        cout<<*(marks+i)<<" ";
    cout<<endl;

    delete[] marks; // freed final block, once
    marks = nullptr;
    return 0;
}
/* Explanation:
   n is just an int, changing it doesn't grow the old heap block.
   You must allocate a new block and copy the data over.
*/