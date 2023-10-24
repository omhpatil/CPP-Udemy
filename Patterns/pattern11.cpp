/*

Input Format: N = 6
Result:   
A 
B B
C C C
D D D D
E E E E E
F F F F F F

*/

#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<6;i++)
    {
        char ch='A'+i;

        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}