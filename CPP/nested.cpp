#include<iostream>
using namespace std;

class A
{ 
public :
class B
{
int num;

public :
void getdata(int n)
{
num = n;
}
void display()
{ 
cout << "Number = " << num << endl;
}
};
};

int main() 
{
A::B obj;
obj.getdata(25);
obj.display();

return 0;
}
