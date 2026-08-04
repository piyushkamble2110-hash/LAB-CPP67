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
    Student s1,s2,s3,s4;
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();
    s3.inputDetails();
    s3.displayDetails();
    s4.inputDetails();
    s4.displayDetails();
    return 0;
}
//commit

