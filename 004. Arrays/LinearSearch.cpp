#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,4,1,3,6,8,5,7};

    //in this code we have find index of value 6

    for(int i=0;i<8;i++)
    {
        if(arr[i]==6)
        {
            cout<<i;
        }
    }

    return 0;

}