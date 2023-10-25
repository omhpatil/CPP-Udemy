#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int res,choice;

    cout<<"Enter any two numbers :";
    cin>>num1>>num2;
    cout<<"Choose the choice : 1.Addition 2.Subtraction 3.Multiplication 4.Division "<<endl;
    cin>>choice;

    if(choice==1)
    {
        res=num1+num2;
        cout<<"Addition is :"<<res;
    }
    else if(choice==2)
    {
        res=num1-num2;
        cout<<"Subtraction is :"<<res;
    }
    else if(choice==3)
    {
        res=num1*num2;
        cout<<"Multiplication is :"<<res;
    }
    else if(choice==4)
    {
        res=num1/num2;
        cout<<"Division is :"<<res;
    }
    else{
        cout<<"..... Choose correct choice .....";
    }



    return 0;
}
