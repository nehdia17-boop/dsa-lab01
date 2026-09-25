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
    cout<<"Marks      : "<<s->marks<<endl;
}
void updateMarks(Student* s, float newMarks){
    s->marks=newMarks;
}
void displayIfExists(const Student* s){
    if(s != nullptr){
        displayStudent(s);
    } 
    else{
        cout<<"No record available"<<endl;
    }
}
int main(){
    Student* p=nullptr;
    int choice;
    do{
        cout<<"\n===== Student Record Menu =====\n";
        cout<<"1. Create record\n";
        cout<<"2. Display record\n";
        cout<<"3. Update marks\n";
        cout<<"4. Delete record\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(p != nullptr){
                    cout<<"A record already exists. Delete it first.\n";
                } 
                else{
                    p=new Student{};
                    cout<<"Enter roll number: ";
                    cin>>p->rollNo;
                    cout<<"Enter full name: ";
                    getline(cin>>ws, p->name);
                    cout<<"Enter marks: ";
                    cin>>p->marks;
                    cout<<"Record created.\n";
                }
                break;
            case 2:
                displayIfExists(p);
                break;
            case 3:
                if(p == nullptr){
                    cout<<"No record available\n";
                } 
                else{
                    float newMarks;
                    cout<<"Enter updated marks: ";
                    cin>>newMarks;
                    updateMarks(p, newMarks);
                    cout<<"Marks updated.\n";
                }
                break;
            case 4:
                if(p==nullptr){
                    cout<<"No record available\n";
                } 
                else{
                    delete p;
                    p=nullptr;
                    cout<<"Record deleted.\n";
                }
                break;
            case 5:
                cout<<"Exiting program.\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    } 
    while(choice != 5);
    //Released any remaining allocation before exiting
    if(p != nullptr){
        delete p;
        p=nullptr;
    }
    return 0;
}