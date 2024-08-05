#include<iostream>
using namespace std;

class base{
    private:
        int a=10;
    protected:
        int b=5;
    public:
        int c=100;

    friend void display();
};

void display(){
    base b;
    b.a=20;

    cout<<b.a;
}

int main() {
    display();  
    return 0;
}