#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;
    cout<<*p<<endl;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<p[-4];    // complete this statement to print 2
}