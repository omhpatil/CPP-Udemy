#include<iostream>
using namespace std;

void func(int a)
{
    if(a>0)
    {
        cout<<a<<endl;
        func(a-1);
    }
}


int main()          //output : 5 4 3 2 1
{
    int x=5;
    func(x);
}

// #include<iostream>
// using namespace std;

// void func(int a)
// {
//     if(a>0)
//     {
//         func(a-1);
//         cout<<a<<endl;
//     }
// }


// int main()       //output : 1 2 3 4 5 
// {
//     int x=5;
//     func(x);
// }