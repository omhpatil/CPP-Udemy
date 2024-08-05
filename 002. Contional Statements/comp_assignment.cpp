#include<iostream>
using namespace std;

int main()
{
    int sum=10, a=5;
    sum+=a; //here we use compound assignment operator that value of a is added with the sum and stored in the sum

    cout<<"Value of sum is : "<<sum;
    return 0;
}

/*
int main()
{
    int sum=10,a=5; //here is that sum=sum*a;
    sum*=a;
    cout<<"The value of sum is : "<<sum;
    return 0;
}
*/
