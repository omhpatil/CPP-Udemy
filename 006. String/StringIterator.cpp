#include<iostream>
using namespace std;

int main()
{
    
    // forward iterator

    string str = "heyhowareyou";
    
    string::iterator it;
    string::reverse_iterator iti;

    for(it=str.begin(); it<str.end(); it++)
    {
        cout<<*it;
    }

    cout<<endl;


    // backward iterator

    for(iti=str.rbegin(); iti<str.rend(); iti++)
    {
        cout<<*iti;
    }

    cout<<endl;

    for(int i=0; str[i]!='\0';i++)
    {
        cout<<str[i];
    }

}
