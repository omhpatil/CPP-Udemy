#include<iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return true;
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    int k;
    cout<<"Enter element to be search :";
    cin>>k;

    int index=search(arr,9,k);

    cout<<"Element found at index :"<<index;
}