#include <iostream>
using namespace std;


{

    int n, i, fact=1;
    cout << "Enter value of n :";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;

}
