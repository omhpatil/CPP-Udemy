#include<iostream>
using namespace std;

int main()
{
    int x=10,y=0,z;
    try{
        if(y==0)
            throw string("- Here is throwed exception");
        z=x/y;
        cout<<z<<endl;
    }
    catch(string i){
        cout<<"Division by Zero"<<" "<<i;
    }
}