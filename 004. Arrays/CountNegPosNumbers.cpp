#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,-1,2,-2,3,-3};

    int neg=0,pos=0;

    for(int i=0;i<6;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    cout<<"Positive numbers in array are "<<pos<< " & negative numbers are "<<neg;

    return 0;
}