//how to create class and how to use class

#include<iostream>
using namespace std;

class rectangle        // classes are user defined datatype so here rectangle also one type of datatype
{
    public:

    int l,b;

    int area()
    {
        return l*b;
    }

    int perimeter()
    {
        return 2*(l*b);
    }
};

int main()
{
    rectangle r1, r2; // here rectangle is datatype for variables r1, and r2;

    r1.l=10;  // by using dot operator i have set values 
    r1.b=20;  // by using dot operator i have set values  

    r2.l=20;
    r2.b=40;

    cout<<"Area of r1 is "<<r1.area()<<endl;
    cout<<"Perimeter of r1 is "<<r1.perimeter()<<endl;

    cout<<"Area of r2 is "<<r2.area()<<endl;
    cout<<"Perimeter of r2 is "<<r2.perimeter()<<endl;

    return 0;

}