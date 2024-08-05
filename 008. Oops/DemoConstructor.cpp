#include<iostream>
using namespace std;

class Rectangle{

    private:
        int length;
        int breadth;
    
    public:

        //Default Contructor
        // Rectangle()
        // {
        //     length=1;
        //     breadth=2;
        // }

        //Parameterized Constructor 
        Rectangle(int l=1, int b=1)     //default and parameterized contructor both combined here by assigning value 1 to both l and b
        {
            setLength(l);
            setBreadth(b);
        }

        void setLength(int l)
        {
            length=l;
        }

        int getLength()
        {
            return length;
        }

        void setBreadth(int l)
        {
            breadth=l;
        }

        int setBreadth()
        {
            return breadth;
        }

    
        //copy constructor
        Rectangle(Rectangle &r)
        {
            length=r.length;
            breadth=r.breadth;
        }
        

    int area()
    {
        return length*breadth;
    }

};

int main()
{
    Rectangle r(10,5);
    Rectangle r1(r);

    cout<<r1.area();
}