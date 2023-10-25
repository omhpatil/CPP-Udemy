#include<iostream>
using namespace std;

void fun(int x){
    if (x%2==0)
    {
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}
    
int main(){ 
    int num;
    cout<<"Enter value of num :";
    cin>>num;
    
    fun(num);
    return 0;
}
