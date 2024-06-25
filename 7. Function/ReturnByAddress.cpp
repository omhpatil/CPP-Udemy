#include<iostream>
using namespace std;

int *fun()
{
    int *p = new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=i+1;
    }
    cout<<p<<endl;
    return p;
}

int main()
{
    int *ptr=fun();

    cout<<ptr<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i];
    }
}