#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"Default of Base"<<endl;
    }

    parent(int x){
        cout<<"Paramaterized of Base"<<endl;
    }
};

class Derived: public parent{
    public:
    Derived(){
        cout<<"Default of Derived"<<endl;
    }

    Derived(int x): parent(x){
        cout<<"Paramaterized of Derived"<<endl;
    }
};
        
int main(){
    Derived d(10);
    
    return 0;    
}