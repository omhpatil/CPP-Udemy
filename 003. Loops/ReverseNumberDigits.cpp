#include<iostream>
using namespace std;

int main()
{
    int r,n,rev=0,palin;

    cout<<"n :";
    cin>>n;

    palin=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;

        rev=rev*10+r;
    }
    cout<<"Result :"<<rev<<endl;

    if(palin==rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }

    return 0;

}
