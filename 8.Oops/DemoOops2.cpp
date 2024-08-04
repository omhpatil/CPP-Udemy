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
    rectangle *p=new rectangle();

    p->l=10;
    p->b=20;

    cout<<"Area of rectangle is "<<p->area()<<endl;
    cout<<"Perimeter of rectangle is "<<p->perimeter()<<endl;

    delete p;

    return 0;

}   