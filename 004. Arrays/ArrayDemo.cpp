#include<iostream>
using namespace std;

// int main()
// {
//     int A[5]={1,2,3,4,5};

//     for(int i=0;i<5;i++)  //using for loop
//         cout<<A[i]<<endl;

//     return 0;
// }

//using for each loop we can iterate all the elements in the given array


// instead of giving int type in for cond we can use auto type 
// auto basically tells which type of value is stored in array no matter it is int, float, char

// int main()
// {
//     int A[]={1,2,3,4,5,6};

//     for(auto x:A)  //using for each loop
//     {
//         cout<<x<<endl;
//     }

//     return 0;
// }

int main()
{
    char A[]={65, 'B', 67, 'D'};

    for(auto x:A)  //using for each loop
    {
        cout<<x<<endl;
    }

    return 0;
}