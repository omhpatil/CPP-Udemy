#include<iostream>
using namespace std;

void fun(int x, int y, int z)
{
    if(x>y && x>z)
    {
        cout<<"x is maximum number";
    }
    else if(y>x && y>z)
    {
        cout<<"y is maximum number";
    }
    else
    {
        cout<<"z is maximum number";
    }
}
int main()
{
    fun(10,20,30);
    return 0;

}


