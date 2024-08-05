#include<iostream>
using namespace std;

//program for finding the speed
int main()
{
    //formula of speed is = (v*v-u*u)/(2*a)
    int u,v,a; //u= initial velocity, v=final velocity, a=acceleration
    float speed;

    cout<<"Enter values of u,v,a : ";
    cin>>u>>v>>a;

    speed=(v*v-u*u)/(2*a);
    cout<<"Speed is : "<<speed;

    return 0;
}
