#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[]="237";
    char s2[]="123.123";

    long int x=strtol(s1,NULL,10);  //String To Length
    float y=strtof(s2,NULL);  //String To Float  

    cout<<x+3<<endl;
    cout<<y-.123;
}