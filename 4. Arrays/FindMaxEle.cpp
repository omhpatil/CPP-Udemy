#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,4,1,3,6,8,5,7};

    int a=arr[0];

    for(int i=1;i<8;i++)
    {
        if(arr[i]>a)
        {
            a=arr[i];
            
        }
    }

    cout<<"Maximum element of array is: "<<a;
}