// Name: Nehdia Rizvi
// Registration No: 540841
// Section: BSCS 15 D
#include<iostream>
#include<string>
using namespace std;
struct Student {
    int rollNo;
    string name;
    float marks;
};
int main() {
    Student s;
    cout<<"Enter roll number: ";
    cin>>s.rollNo;
    cout<<"Enter full name: ";
    getline(cin>>ws, s.name);
    cout<<"Enter marks: ";
    cin>>s.marks;
    cout<<"\n--- Student Record ---\n";
    cout<<"Roll Number: "<<s.rollNo<<endl;
    cout<<"Name       : "<<s.name<<endl;
    cout<<"Marks      : "<<s.marks << endl;
    return 0;
}