#include<iostream>
using namespace std;

class car{
    public:
    virtual void start()=0;

    virtual void stop()=0;
};

class innova: public car{
    public:
    void start(){
        cout<<"Innova stated"<<endl;
    }

    void stop(){
        cout<<"Innova stopped";
    }
};

class swift: public car{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    }

    void stop(){
        cout<<"Swift stopped";
    }
};

int main()
{
    car *c=new innova();
    c->start();

    c=new swift();
    c->start();
}

// same statement start() calling different function calling first time innova and second time swift
// also called polymorphism 
// virtual void display() = 0; -- pure virtual function
// also pure virtual class must be derived by derived class otherwise it will called as abstract