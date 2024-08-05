#include<iostream>
using namespace std;

int min(int x,int y)
{
    if(x<y)
        cout<<"x is minimum"<<endl;
    else
        cout<<"y is minimum"<<endl;
}

int min(int x,int y,int z)
{
    if(x<y && x<z)
        cout<<"x is minimum"<<endl;
    else if(y<z)
        cout<<"y is minimum"<<endl;
    else
        cout<<"z is minimum"<<endl;
}

float min(float x,float y)
{
    if(x<y)
        cout<<"x is minimum"<<endl;
    else
        cout<<"y is minimum"<<endl;
}

int main()
{
    min(30,20);
    min(15.5f,13.5f);
    min(100,20,10);

    return 0;
}

