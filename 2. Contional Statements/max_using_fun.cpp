#include<iostream>
using namespace std;

void max(int x,int y)
{
    if(x>y){
        cout<<"max is :"<<x;
    }
    else{
        cout<<"max is :"<<y;
    }
}

int main(){
    int num1,num2;
    cout<<"Enter any two number :";
    cin>>num1>>num2;
    
    max(num1,num2);
    
    return 0;
}