#include<iostream>
using namespace std;

template <class T>
T maximum(T x, T y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int res = maximum(10,20);
    cout<<res;
}

// but here we cant take to different like one of them is int and other one float 
// in the argument list in main function like eg : (int res =  maximum(3, 3.5))