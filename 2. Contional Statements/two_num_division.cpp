#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of a :";
    cin>>a;

    cout<<"Enter value of b :";
    cin>>b;

    
    if(b==0){
        cout<<"Divisior is zero";
    }
    else{
        c=a/b;
        cout<<c;
    }

    return 0;
}