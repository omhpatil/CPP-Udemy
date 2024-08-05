#include<iostream>
using namespace std;

// int main(){
//     int hour;
//     cout<<"Enter hours :";
//     cin>>hour;

//     if(hour>=9 && hour<=18){
//         cout<<"working time";
//     }
//     else{
//         cout<<"free time";
//     }

//     return 0;
// }


void working(int hour){
    if(hour>=9 && hour<=18){
        cout<<"working";
    }
    else{
        cout<<"free time";
    }
}

int main(){
    int tas;
    cout<<"Enter number of hour :";
    cin>>tas;

    working(tas);

    return 0;
}