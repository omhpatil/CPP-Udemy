#include<iostream>
using namespace std;

int main(){
    int i=1,n=0;

    cout<<"Enter value of n :";
    cin>>n;

    do{
        cout<<i<<endl;
        i++;
    }while(i<=n);

    return 0;
}