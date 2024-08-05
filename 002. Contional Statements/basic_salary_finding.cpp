#include<iostream>
using namespace std;

int main()
{
    int bs, pa, pd, ns;

    cout<<"Enter the basic salary :";
    cin>>bs;

    cout<<"Enter percentage of allowances :";
    cin>>pa;

    cout<<"Enter percentage of deduction :";
    cin>>pd;

    ns = bs + bs * pa - bs * pd;

    cout<<"Net Salary is :"<<ns;

    return 0;
}
