#include<iostream>
using namespace std;

int Division(int a, int b) throw(int){  // throw(int) is optional 
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int x=10,y=0,z;

    try{
        z=Division(x,y);   // function is called here
        cout<<z;
    }

    catch(int i)
    {
        cout<<"Divide By Zero";
    }
}