/*

Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A

*/

//code here 

#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<6;i++)
    {
        for(char j='A';j<'A'+(6-i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
