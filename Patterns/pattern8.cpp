/*

Input Format: N = 6
Result:
***********
 *********
  *******
   *****
    ***
     *

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // for before space
        {
            cout << " ";
        }

        for(int j=0;j< 2*n -(2*i +1);j++)// for star
        { 

            cout << "*";
        }

        for (int j = 0; j < i; j++) // for after space
        {
            cout << " ";
        }

        cout << endl;
    }
}