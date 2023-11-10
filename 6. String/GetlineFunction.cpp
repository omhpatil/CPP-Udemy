#include<iostream>
using namespace std;

int main()
{
    char s[50];

    cout<<"Enter your name :";
    cin.getline(s,50);

    cout<<"Welcome Mr."<<s;

    //use always getline instead of get function 
    //otherwiese use cin.ignore(); function

}