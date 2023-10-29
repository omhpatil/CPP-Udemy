// string is collection of alpabates or characters

#include<iostream>
using namespace std;

int main()
{
    char c[]="hello";
    char ch[5]={'h','e','y','\0','o'}; //o is not printed bcoz of null character or string deliminator
    char s[]={65,66,67,68,0,69,70};

    cout<<c<<endl;
    cout<<ch<<endl;
    cout<<s;

    return 0;
}