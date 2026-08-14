#include<iostream>
using namespace std;

void demo()
{
class Local {
public:
void show ()
{
cout << "This is a local class" << endl;
}
};
Local obj;
obj.show();
}
int main()
{
demo();
return 0;
}
