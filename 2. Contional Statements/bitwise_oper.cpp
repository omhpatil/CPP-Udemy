#include<iostream>
using namespace std;

/*
int main()
{
    int a=11,b=7,res;
    res=a&b;

    cout<<"the result is : "<<res; //the result will be 3
    return 0;
}
*/

int main()
{
    int a=5,b;

    //b=a<<1; //here all bits of a that is 101 is shifted left by one zero which is became 1010 by which value of b becomes 10
    b=a>>1; //here all bits of a that us 101 if shifted right by one and becomes 10 by which value of b becomes 2
    cout<<"the of b becomes : "<<b;

    return 0;
}
