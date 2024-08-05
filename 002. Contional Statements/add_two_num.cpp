#include<iostream>
using namespace std;

// void add(int x,int y){
//     int num;
//     cout<<"Enter value of num :";
//     cin>>num;

//     if(num==1){
//         cout<<x+y;
//     }
//     else{
//         cout<<x-y;
//     }
// }

//By using Function
void add(int a,int b); //function declaration

int main(){
    int x,y;
    cout<<"Enter value of x :";
    cin>>x;
    cout<<"Enter value of y :";
    cin>>y;
    add(x,y);

    return 0;
}

void add(int a,int b) //function definition
{
    int sum = a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum; 
}


