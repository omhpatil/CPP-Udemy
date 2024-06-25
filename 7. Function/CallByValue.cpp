#include<iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;

    temp = x;
    x=y;
    y=temp;

    cout<<"inside function "<<x<<" "<<y<<endl;

}

// in call /  pass by value only value inside function are changed they cannot affect original value

int main()
{
    int x=10,y=20;
    cout<<"before swapping "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"after swapping "<<x<<" "<<y<<endl;
    return 0;

}