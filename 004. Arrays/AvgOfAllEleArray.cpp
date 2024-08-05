#include<iostream>
using namespace std;

int main()
{
    int n;
    float num[100], sum=0, avg;

    cout<<"Enter number of elements in array : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". Enter Number: ";
        cin>>num[i];
        sum=sum+num[i];
    } 

    avg=sum/n;
    cout<<"Average of Elements in array is "<<avg;

    return 0;
}