#include<iostream>
using namespace std;

void max(int a, int b,int c){
    if(a>b && a>c){
        cout<<"a is greater than b and c";
    }
    else if(b>c){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }
}

int main(){
    int a,b,c;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Enter value of c :";
    cin>>c;

    max(a,b,c);


    return 0;

}