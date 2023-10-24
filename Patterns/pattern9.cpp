/*

Input Format: N = 6
Result:   
A
A B
A B C
A B C D
A B C D E
A B C D E F

*/

#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<6;i++)
    {
        for(char j='A';j<'A'+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}