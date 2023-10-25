#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "Enter number of n :";
    cin >> n;

    // for (i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }

    // cout << sum;


    // while(i <= n){
    //     sum=sum+i;
    //     i++;
    // }

    // cout<<sum;

    do{
        sum=sum+i;
        i++;
    }while(i<=n);

    cout<<sum;
    return 0;
}
