#include<iostream>
using namespace std;

int myfun()
{ 
    static int i=0;
    i++;
    return i;
}


int main()
{
    cout<<myfun();
    return 0;

}