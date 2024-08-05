#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[]="";
    char s2[]="Patil";

    //strcpy(s1,s2);
    strncpy(s1,s2,2);

    cout<<s1;

    return 0;
}
