#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main()
{
    float res, length, breadth;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter breadth : ";
    cin>>breadth;

    res = (length*breadth)/2;  //formula for area of triangle
    cout<<"Area of triangle is : "<<res;

    return 0;

}
