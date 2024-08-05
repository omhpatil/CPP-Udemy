#include<iostream>
using namespace std;

class Rectangle{        

    public:
        int length;
        int breadth;

    public:            
        int area()
        {
            return length*breadth;
        }

        inline int perimeter();     // make the function inline using inline keyword   

};

int Rectangle::perimeter()     
{      
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