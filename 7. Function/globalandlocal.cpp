#include<iostream>
using namespace std;

int g=0;

void func()
{
    int a=5;
    g=g+a; // 25 + 5 = 30
    cout<<g<<endl;
}

int main()
{
    g=25;

    func();

    g++; // g becames 30 in Func() after inc value g became 31
    cout<<g;
}