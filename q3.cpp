//Name: Nehdia Rizvi
//Registration No: 540841
//Section: BSCS 15 D
#include<iostream>
#include<string>
using namespace std;
struct Student{
    int rollNo;
    string name;
    float marks;
};
int main(){
    Student* p=new Student{};
    cout<<"Enter roll number: ";
    cin>>p->rollNo;
    cout<<"Enter full name: ";
    getline(cin>>ws, p->name);
    cout<<"Enter marks: ";
    cin>>p->marks;

    cout<<"\n--- Student Record (dynamically allocated) ---\n";
    cout<<"Roll Number: "<<p->rollNo<<endl;
    cout<<"Name       : "<<p->name<<endl;
    cout<<"Marks      : "<<p->marks<<endl;
    delete p;
    p=nullptr;
    cout<<"\nMemory released. Pointer set to nullptr."<<endl;
    return 0;
}