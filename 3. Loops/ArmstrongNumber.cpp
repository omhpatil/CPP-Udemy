#include<iostream>
using namespace std;

int main()
{
    int sum,n,pre,res;

    cout<<"n :";
    cin>>n;

    pre=n;

    while(n>0)
    {
        res=n%10;
        n=n/10;

        sum=sum+res*res*res;
    }

    if(pre==sum)
        {
            cout<<"Armstrong Number";
        }
        else{
            cout<<"Not Armstrong Number";
        }

}
