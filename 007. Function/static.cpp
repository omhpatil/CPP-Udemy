#include<iostream>
using namespace std;

void  fun()
{ 
    static int x = 0; // if we dont use static then value of x remains start from 0 
    int a = 5;        // hence static variables can declared only one times
    x++;              // used in modular or functional programming
    cout<<a<<" "<<x<<endl;
}

int main()
{   
    fun();
    fun();
    fun();
}