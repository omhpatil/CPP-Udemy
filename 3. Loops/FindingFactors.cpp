#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}
