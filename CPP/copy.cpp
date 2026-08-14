#include<iostream>
using namespace std;

class A
{
int x;
public: 
  A(int a)
{
x=a;
}
A(const A &obj)
{
x= obj.x;
}
void display()
{
cout << "Value =" << x << endl;
}
};
int main() 
{
A obj1(10);
A obj2 = obj1;

obj1.display();
obj2.display();

return 0;
}
