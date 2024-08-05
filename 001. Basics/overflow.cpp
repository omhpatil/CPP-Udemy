#include<iostream>
using namespace std;

int main()
{
    char x=127;
    ++x; // output = -128
    
    //++x; output = -127

    cout<<int(x);
    return 0;
}

/*
here is overflow is going
bcoz value of char is ranges from 127 to -128
and when we assign 127 value to x and then we
increase the value of x then it becomes -128
here is called as overflow
*/
