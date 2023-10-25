#include<iostream>
using namespace std;
/*
int main()
{
    int a,b=5;

    a=++b; //pre-increment : the value of b became 6 and stored in a
    cout<<a<<endl;

    a=b++; //post-increment : the value of b became 6 and stored in a
    cout<<a;

    return 0;
}
*/

int main()
{
    int a=10,b=5,c;
    /*
    c=a++ *b; //a=11,b=5,c=50
    cout<<c<<endl;
    */

    c=++a *b; //a=11,b=5,c=55;
    cout<<c;

    return 0;
}
