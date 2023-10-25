#include<iostream>
using namespace std;

enum days{mon,tue,wens,thur,fri,sast,sun};
enum dept{CS=1,IT,ENTC=3,CIVIL};

int main()
{
        days d = mon; //enum is used for defining all values under one datatype
        dept dep = CS;

        cout<<d<<endl;
        cout<<tue<<endl;

        cout<<dep<<endl;
        cout<<CIVIL;

        return 0;
}
