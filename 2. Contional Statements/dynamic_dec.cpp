#include<iostream>
using namespace std;

// int main(){
//     int a=12,b=1;
//     if(true){
//         int c=a+b;  //we have declared c inside the if block
//         cout<<c;
//     }
//     //cout<<c;    //outside the if block c will be shown as undefined variable
// }

//also instead of that if we can declare variable outside the block and also delete after block
//for that we can use empty block which is add another two curley bracket

int main(){
    int a=10,b=5;
    {
        int c=a+b;
        if(true){
            cout<<c;
        }
    }
    //cout<<c; //here will be show error of not defined
    return 0;
}