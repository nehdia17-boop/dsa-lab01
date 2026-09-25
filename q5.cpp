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
void displayIfExists(const Student* s){
    if(s != nullptr){
        cout<<"Roll Number: "<<s->rollNo<<endl;
        cout<<"Name       : "<<s->name<<endl;
        cout<<"Marks      : "<<s->marks<<endl;
    } 
    else{
        cout<<"No record available"<<endl;
    }
}
int main(){
    Student* p=nullptr;
    cout<<"Checking before allocation:\n";
    displayIfExists(p);
    p=new Student{};
    cout<<"\nEnter roll number: ";
    cin>>p->rollNo;
    cout<<"Enter full name: ";
    getline(cin>>ws, p->name);
    cout<<"Enter marks: ";
    cin>>p->marks;
    cout<<"\nChecking after allocating and entering record:\n";
    displayIfExists(p);
    delete p;
    p=nullptr;
    cout<<"\nChecking after deleting record:\n";
    displayIfExists(p);
    return 0;
}