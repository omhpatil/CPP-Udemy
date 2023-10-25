#include<iostream>
using namespace std;

int main(){
    float amount;
    int discount=0;

    cout<<"Enter your bill amount :";
    cin>>amount;

    if (amount<100){
        discount==0;
    }
    else if(amount>=100 && amount<=500){
        discount=amount*10/100;
    }
    else{
        discount=amount*20/100;
}  

    cout<<"Your bill amount is "<<amount<<" rs"<<endl;
    cout<<"Your will get "<<discount<<" rs"<<endl;
    cout<<"Discounted amount is "<<amount-discount<<" rs";
    
    return 0;
}

