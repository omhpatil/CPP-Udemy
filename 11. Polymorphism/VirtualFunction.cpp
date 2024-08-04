#include<iostream>          
using namespace std;

class parent{
    public:
    virtual void display(){       // virtual function
        cout<<"display parent";
    }
};

class child: public parent{
    public:
    void display(){
        cout<<"display child";
    }
};


int main()
{
    parent *p = new child();
    p->display();                  // This will call child's display method due to virtual function
    delete p;
                                   
}

// if ij dont use virtual function then parent class function is running else child class
// also it is the example of runtime polymorphism