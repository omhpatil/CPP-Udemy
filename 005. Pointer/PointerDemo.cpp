#include <iostream>
using namespace std;

int main()
{
    int x = 10; // data variable
    int *p;     // declaring pointer

    p = &x; // initilizing pointer

    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}