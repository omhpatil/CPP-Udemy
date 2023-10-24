/*

Input: N = 3
Output: 
* * *
* * *
* * *

*/


#include<iostream>
using namespace std;

int main()
{
    
    for(int i=1;i<=3;i++)  //for rows 
    {
        for(int j=1;j<=3;j++)   //for coloumns
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }

    return 0;

}