#include<iostream>
using namespace std;
int main(){
    int n=3;
    int* values=new int[n];
    for(int i=0; i<n; i++) // fixed: was i <= n (out of bounds)
        cin>>values[i];
    for (int i = 0; i<n; i++) // fixed: print BEFORE deleting
        cout<<values[i]<<" ";
    cout<<endl;
    delete[] values; // fixed: was "delete values" (wrong for arrays)
    values = nullptr; // fixed: avoid dangling pointer
    return 0;
}
/* Original 3 bugs:
   1. i<=n  -> writes one past the array(out-of-bounds)
   2. delete values -> should be delete[] values
   3. cout<<values[0] after delete -> use-after-free(dangling pointer)
*/