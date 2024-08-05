#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[50];

    cout<<"Enter String :";
    cin.getline(s,50);
    
    cout<<"Length of string is "<<strlen(s); 

    return 0;

}