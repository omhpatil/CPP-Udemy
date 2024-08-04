#include<iostream>
using namespace std;

class parent{
    public:
    void display(){
        cout<<"Display parent"<<endl;
    }
};

class child{
    public:
    void display(){
        cout<<"Display child"<<endl;
    }
};

int main(){
    parent p;
    p.display();
    child c;
    c.display();
}