#include<iostream>
using namespace std;

class Parent{
    public:
    int x=10;
    void show(){
        cout<<x<<endl;
    }
};

class child: public Parent{
    public:
    int y=5;
    void display(){
        cout<<y<<endl;
    }
};

int main()
{
    Parent p;
    p.show();

    child c;
    c.show();
    c.display();

    return 0;

}