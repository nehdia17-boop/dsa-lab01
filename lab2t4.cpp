#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Students: "; 
    cin>>rows;
    cout<<"Subjects: "; 
    cin>>cols;
    if(rows<1 || rows>10 || cols<1 || cols>10){
        cout<<"Error: out of range"<<endl;
        return 0;
    }
    int** marks = new int*[rows]; // array of row pointers
    for(int r=0; r<rows; r++)
        marks[r] = new int[cols]; // allocated each row

    for(int r=0; r<rows; r++)
        for(int c=0; c<cols; c++)
            cin>>*(*(marks+r)+c);
    int bestTotal=0, bestStudent=1;
    for(int r=0; r<rows; r++){
        int total=0;
        for(int c=0; c<cols; c++)
            total+=marks[r][c];
        cout<<"Student "<<(r+1)<<" total: "<<total<<endl;
        if(r==0 || total>bestTotal){ // > keeps first on ties
            bestTotal=total;
            bestStudent=r+1;
        }
    }
    cout<<"Top: Student "<<bestStudent<<" ("<<bestTotal<<")"<<endl;
    for(int r=0; r<rows; r++)
        delete[] marks[r]; // freed each row first
    delete[] marks; // then freed the row-pointer array
    marks = nullptr;
    return 0;
}
/* Explanations:
   - If you only do delete[] marks, and skip the per-row loop, each row's
     memory is leaked, no pointer left to reach it.
   - Sketch: marks to [marks[0], marks[1]] to each points to its own
     row of `cols` ints. Label marks, marks[0], marks[0][0].
*/