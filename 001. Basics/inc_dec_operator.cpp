#include<iostream>
using namespace std;
/*
int main()
{
    int a,b=5;

    a=++b; //pre-increment : Increment i first, then use its value
    cout<<a<<endl;

    a=b++; //post-increment : Use i's value first, then increment it

    return 0;
}
*/

int main()
{
    int a=10,b=5,res1,res2;
   
    //post-increment
    res2=a;
    a++;
    cout<<a<<" "<<res2<<endl;

    //pre-increment
    ++b; 
    res1 = b;
    cout<<b<<" "<<res1;

    
    return 0;
}
