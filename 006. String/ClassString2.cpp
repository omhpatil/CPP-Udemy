#include<iostream>
using namespace std;

int main()
{
    string str="Om";

    string str2 = "Om";

    cout<<str.append(" Patil")<<endl;

    cout<<str.insert(3,"H. ")<<endl;

    cout<<str.erase(3)<<endl;

    str2.push_back('i');

    cout<<str2;

    // str2.pop_back('i');

    // cout<<str2

}