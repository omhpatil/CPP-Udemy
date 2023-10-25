#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter day :";
    cin>>day;

    if(day==1){
        cout<<"its monday";
    }
    else if(day==2){
        cout<<"its tuesday";
    }
    else if(day==3){
        cout<<"its wensday";
    }
    else if(day==4){
        cout<<"its thursday";
    }
    else if(day==5){
        cout<<"its friday";
    }
    else if(day==6){
        cout<<"its saturday";
    }
    else if(day==7){
        cout<<"its sunday";
    }
    else{
        cout<<"choose correct choice";
    }

    return 0;
}
