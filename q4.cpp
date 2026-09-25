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
void displayStudent(const Student* s){
    cout<<"Roll Number: "<<s->rollNo<<endl;
    cout<<"Name       : "<<s->name<<endl;
    cout<<"Marks      : "<<s->marks<< endl;
}
void updateMarks(Student* s, float newMarks){
    s->marks=newMarks;
}
int main(){
    Student* p=new Student{};
    cout<<"Enter roll number: ";
    cin>>p->rollNo;
    cout<<"Enter full name: ";
    getline(cin>>ws, p->name);
    cout<<"Enter marks: ";
    cin>>p->marks;
    cout<<"\n--- Student Record ---\n";
    displayStudent(p);
    float newMarks;
    cout<<"\nEnter updated marks: ";
    cin>>newMarks;
    updateMarks(p, newMarks);
    cout<<"\n--- Updated Student Record ---\n";
    displayStudent(p);
    delete p;
    p=nullptr;
    return 0;
}