#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"Enter value of n : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == 2 * n)
        cout << "perfect";
    else
        cout << "not perfect";

}