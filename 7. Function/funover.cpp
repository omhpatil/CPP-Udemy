#include<iostream>
using namespace std;

int sum(int x,int y)
{
    return x+y;
}
float sum(float x, float y)
{
    return x+y;
}

int sum(int x, int y, int z)
{
    return x+y+z;
}

int main()
{
    cout<<sum(10,20)<<endl;
    cout<<sum(11.5f,12.5f)<<endl;
    cout<<sum(10,20,10)<<endl;

    return 0;
}