#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //will return - bcoz s1<s2
    char s1[20]="ABC";
    char s2[20]="abc";
    cout<<strcmp(s1,s2)<<endl;

    //will return + bcoz s3>s4
    char s3[20]="abc";
    char s4[20]="ABC";
    cout<<strcmp(s3,s4)<<endl;

    //will return 0 bcoz s5=s6
    char s5[20]="ABC";
    char s6[20]="ABC";
    cout<<strcmp(s5,s6)<<endl;

}