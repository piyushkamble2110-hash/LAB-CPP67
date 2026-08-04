#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    string name;
    int RollNo;
    float marks;
    public:
    void inputDetails()
    {
        cout<<"Enter Student Name:";
        getline(cin>>ws,name);
        cout<<"Enter Roll Number:";
        cin>>RollNo;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    void displayDetails()const{
        cout<<"\n----student Details----\n";
        cout<<"Name:"<<name<<endl;
        cout<<"RollNo.:"<<RollNo<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}
commit

