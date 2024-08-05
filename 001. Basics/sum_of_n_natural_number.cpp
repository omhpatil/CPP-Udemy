// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,sum;
//     cout<<"Enter n number : ";
//     cin>>n;

//     sum=n*(n+1)/2;
//     cout<<"Sum of n natural number is : "<<sum;

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Enter value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"Sum of "<< n <<" is natural number is "<< sum;

    return 0;
}