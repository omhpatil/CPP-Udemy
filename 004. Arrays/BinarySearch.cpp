#include<iostream>
using namespace std;

int main()
{
    int arr[]={11,21,31,41,51,61,71};

    int low=0, high=6, mid, key;

    cout<<"Enter key to find: ";
    cin>>key;

    while(low<=high)
    {
         mid=(low+high)/2;

        if(key==arr[mid])
        {
            cout<<"key found at: "<<mid;
            return 0;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    cout<<"key not found";
    return 0;
    
}