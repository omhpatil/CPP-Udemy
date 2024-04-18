#include<iostream>
using namespace std;

int main()
{
    string str = "Welcome";

    string::iterator it;

    int count1=0;
    int count2=0;

    for(int i=0;str[i]!='\0';i++)
    {
        count1++;
    }

    cout<<count1<<endl;

    for(it=str.begin(); it<str.end(); it++)
    {
        count2++;
    }

    cout<<count2;


}