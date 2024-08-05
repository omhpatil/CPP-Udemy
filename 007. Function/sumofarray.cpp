#include<iostream>
using namespace std;

int main()
{
    int sum=0;

    int arr[]={1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size;i++)
    {
        sum=sum+arr[i];
    }

    cout<<sum;

    return 0;

}