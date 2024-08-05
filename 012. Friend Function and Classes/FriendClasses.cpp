#include<iostream>
using namespace std;

class child;

class parent{

    private:
        int i=10;
    
    friend child;
};

class child{
    public:

    parent p;

    void display(){
        cout<<p.i;
    }
};  

int main(){
    child c;
    c.display();
    return 0;
}

// to access private member function of any class create a friend function of derived class in that class and by creating object
// of that class in derived class using object we can easily access private data of that class