#include<iostream>
using namespace std;
int main(){
    const int BRANCHES=2, DAYS=3;
    int sales[2][3];
    int(*rowPtr)[3]=sales; // pointer to row of 3 integers
    for(int r=0; r<BRANCHES; r++) //for loop to read values
        for(int c=0; c<DAYS; c++)
            cin>>*(*(rowPtr+r)+c);
    for(int r=0; r<BRANCHES; r++){ //for loop to display table
        for(int c=0; c<DAYS; c++)
            cout<<*(*(rowPtr+r)+c)<<" ";
        cout<<endl;
    }
    for(int r=0; r<BRANCHES; r++){ //for loop to branch totals
        int branchTotal=0;
        for(int c=0; c<DAYS; c++)
            branchTotal+=*(*(rowPtr+r)+c);
        cout<<"Branch "<<(r+1)<<": "<<branchTotal<<endl;
    }
    for(int c=0; c<DAYS; c++){ //for loop for day totals
        int dayTotal=0;
        for(int r=0; r<BRANCHES; r++)
            dayTotal+=*(*(rowPtr+r)+c);
        cout<<"Day "<<(c + 1)<<": "<<dayTotal<<endl;
    }
    return 0;
}
/* Explanations:
   - rowPtr+1 skips a whole row(3 ints, not just 1 int.
   - int**p=sales is wrong: sales decays to "pointer to array of 3 ints",
     not "pointer to pointer", the memory layout doesn't match int**.
*/