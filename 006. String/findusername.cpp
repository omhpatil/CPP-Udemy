#include<iostream>
using namespace std;

int main()
{
    string email="omhpatil@gmail.com";

    int i = email.find('@');

    string uname  = email.substr(0,i);

    cout<<"Username is "<<uname;

    return 0;
}