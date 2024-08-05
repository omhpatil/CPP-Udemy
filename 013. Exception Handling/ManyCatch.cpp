#include<iostream>
using namespace std;

int main()
{
    try{
        throw 1.1;
    }

    catch(int)
    {
        cout<<"Integer catch block";
    }
    
    catch(string)
    {
        cout<<"String catch block";
    }

    catch(char){
        cout<<"Character catch block";
    }

    catch(...){
        cout<<"All catch block";              // all catch block is declared after all catch block(int,char,string,double)
    }
}

// child class exception is always declared first before parent class exception