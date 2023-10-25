#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;

    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else if(n>m)
            n=n-m;
    }

    cout<<"GCD of number is : "<<m;
    
    return 0;
}