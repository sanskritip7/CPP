#include<iostream>
#include<stdio.h>
using namespace std;

class Student 
{
    int roll;
    char name[25];
    public:
    void getdata()
    {
        cout<< "\n -----------------";
        cout<<"\n Enter your Roll number :";
        cin>>roll;
        cout<<"\n Enter you name :";
        cin>>name;
    }
    void putdata()
    {
        cout<< "\n -----------------";
        cout<< "\n ***Student Marklist***";
        cout<< "\n -----------------";
        cout<<"Roll no :" <<roll;
        cout<<"Student name :"<<name<<endl;
    }
};
class StudentExam : public Student
{
    public:
    int sub1, sub2,sub3,sub4,sub5,sub6;
    float per;
    public:
    void accept_data(){
        getdata();
        cout<<"\n Enter marks for subject 1 :";
        cin>>sub1;
        cout<<"\n Enter marks for subject 2 :";
        cin>>sub2;
        cout<<"\n Enter marks for subject 3 :";
        cin>>sub3;
        cout<<"\n Enter marks for subject 4 :";
        cin>>sub4;
        cout<<"\n Enter marks for subject 5 :";
        cin>>sub5;
        cout<<"\n Enter marks for subject 6 :";
        cin>>sub6;
    }
    void display_data() {
        putdata();
        cout << "\n Marks of subject 1 : "<<sub1;
        cout << "\n Marks of subject 2 : "<<sub2;
        cout << "\n Marks of subject 3 : "<<sub3;
        cout << "\n Marks of subject 4 : "<<sub4;
        cout << "\n Marks of subject 5 : "<<sub5;
        cout << "\n Marks of subject 6 : "<<sub6;
    }
};
class StudentResult : public StudentExam
{
    public:
    void calculate(){
        per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
        cout<< "\n\n Total Percentage : "<<per;
        cout<< "\n -----------------";  
    }
};
int main()
{
    StudentResult str;
    int count, i;
    cout<<"\n Enter number of student you want? : ";
    cin>>count;
    for ( i = 0; i < count; i++)
    {
       str.accept_data();
       str.display_data();
       str.calculate();
    }
    return 0;
}
