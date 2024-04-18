// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     string str;
//     cout<<"Enter string ";
//     getline(cin,str);

//     cout<<str;

//     return 0;

// }

#include<iostream>
using namespace std;
int main()
{
    // string str;
    // cout<<"enter the string";
    // getline(cin,str);
    // cout<<str;


    string str="Om Patil";

    cout<<str<<endl;

    cout<<str.length() <<endl;

    cout<<str.size() <<endl;

    cout<<str.capacity() <<endl;

    str.resize(30);

    cout<<str.capacity();

    str.resize(50);

    cout<<str.max_size();

    str.clear();

    cout<<str;
    
}