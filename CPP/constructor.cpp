#include<iostream>
using namespace std;

class A{
public:
A()
{
cout << "constructor called" << endl;
}
};
int main ()
{
A obj;
return 0;
}
