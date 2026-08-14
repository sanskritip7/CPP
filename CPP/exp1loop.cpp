#include<iostream>
#include<string>
using namespace std;

class Student{
private:
string name;
int rollno;
float marks;

public:
void inputDetails() {
cout << "Enter Student Name:";
cin >> name;
cout << "Enter Roll Number:";
cin >> rollno;
cout << "Enter Marks:";
cin >> marks;
}

void displayDetails() const {
cout << "\n -----Student Details-----\n";
cout << "Name "  << name << endl;
cout << "Roll Number " << rollno << endl;
cout << "Marks : " << marks << endl;
}
};

int main() {
Student s;
for ( int i = 0; i < 5; i++) {
cout << "Enter " << i << " student \n" ;
s.inputDetails();
s.displayDetails();
}
return 0;
}

