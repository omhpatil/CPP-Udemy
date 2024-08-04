#include<iostream>
using namespace std;

class Rectangle{        // two ways to write functions

    public:
        int length;
        int breadth;

    public:             // eloborate the function or called inline function
        int area()
        {
            return length*breadth;
        }

        int perimeter();        // prototype of function and

};

int Rectangle::perimeter()      // eloborate outside the function
{                               // if u write function outside the class then machine code can be genrated sepreated for this funtion
    return 2*(length*breadth);
}

int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=5;

    cout<<r.area()<<endl;
    cout<<r.perimeter();

    return 0;

}