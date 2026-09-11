#include<iostream>
using namespace std;
class Student{ //defined a Student class
    public: //declared 2 public attributes
    int rollNumber;
    int marks;
    void display(){ //display function to print values
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){ //main function
    Student s1,s2; //created 2 objects for Student class
    //assigned roll number and marks to s1 and s2
    s1.rollNumber=1;
    s1.marks=75;
    s2.rollNumber=2;
    s2.marks=90;
    //displaying s1 and s2
    cout<<"s1:"<<endl;
    s1.display();
    cout<<"s2:"<<endl;
    s2.display();
    /*Predicted Output:
    s1:
    Roll Number: 1
    Marks: 75
    s2:
    Roll Number: 2
    Marks: 90*/
    //changing s1's marks to 80
    s1.marks=80;
    //again displaying s1 and s2
    cout<<"s1:"<<endl;
    s1.display();
    cout<<"s2:"<<endl;
    s2.display();
    return 0;
}
/* Predicting if s2's marks change:
No, s2.marks will not change after changing s1.marks since both are independent objects, 
and have their own copies of the variable: marks*/