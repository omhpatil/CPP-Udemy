#include<iostream>
using namespace std;

int main()
{
    int n,res;
    cout<<"n :";
    cin>>n;

    while(n>0)
    {
        res=n%10;
        n=n/10;

        cout<<res<<endl;
    }



    return 0;
}
