#include<iostream>
using namespace std;

int main()
{
    cout<<"Menu :\n";
    cout<<"1.Add\n"<<"2.Sub\n"<<"3.Mul\n"<<"4.Div\n\n";

    int option,a,b,c;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Enter your option :";
    cin>>option;

    switch(option){
        case 1:
            c = a+b;
            cout<<"Addition is :"<<c;
            break;
        
        case 2:
            c = a-b;
            cout<<"Substraction is :"<<c;
            break;

        case 3:
            c = a*b;
            cout<<"Multiplication is :"<<c;
            break;

        case 4:
            c = a/b;
            cout<<"Division is :"<<c;
            break;
            
        default:
            cout<<"Enter correct choice";   
    }

    return 0;
}