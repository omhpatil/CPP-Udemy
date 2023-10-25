#include<iostream>
using namespace std;

void func(int m1, int m2, int m3){
    int total;
    float avg;
    total = m1 + m2 + m3;
    avg = total / 3.0;

    if(avg<=35){
        cout<<"passed (Grade C)";
    }
    else if(avg>=35 && avg<=65){
        cout<<"average student (Grade B)";
    }
    else{
        cout<<"clever student (Grade A)";
    }
}
int main(){
    int m1,m2,m3;
    cout<<"Enter marks of m1 :";
    cin>>m1;
    cout<<"Enter marks of m2 :";
    cin>>m2;
    cout<<"Enter marks of m3 :";
    cin>>m3;

    func(m1,m2,m3);

    return 0;

}

