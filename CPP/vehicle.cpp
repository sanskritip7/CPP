#include<iostream>
using namespace std;

class vehicle {
    public:
    vehicle (){
        cout<<"This is a vehicle.\n";
    }
};
class car: public vehicle {
    public : 
    car(){
        cout<<"This vehicle is car.\n";
    }
    };

class Bus: public vehicle {
public:
Bus () {
     cout <<"This Vehicle is Bus. \n" ;
     }
};

int main () {
car obj1;
Bus obj2;

return 0;
}
