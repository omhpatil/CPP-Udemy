#include<iostream>

using namespace std;

void Sign(int m)
{
    if(m>=0)
        cout<<"positive";
    else
        cout<<"negative";
}

int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;


    Sign(n);
    return 0;
}