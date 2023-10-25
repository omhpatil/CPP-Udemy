#include <iostream>
using namespace std;

int main()
{
    int n,res;

    cout<<"Enter value of n :";
    cin>>n;

    for (int i = 1; i <= 10;i++)
    {
        res=i*n;
        cout<<n<<"x"<<i<<"="<<res<<endl;
    }

    return 0;
}
