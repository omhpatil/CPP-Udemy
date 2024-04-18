#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string str = "Welcome";

    char c[10];

    str.copy(c,str.length());
    
    c[10]='\0';

    cout<<c;

    cout<<str.find('l');



}