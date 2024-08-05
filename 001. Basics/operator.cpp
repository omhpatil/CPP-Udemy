#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int res,choice;

    cout<<"Choose the choice :\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n "<<endl;
    cin>>choice;
  

    if(choice==1)
    {
        cout<<"Enter any two numbers :";
        cin>>num1>>num2;
        res=num1+num2;
        cout<<"Addition is :"<<res;
    }
    else if(choice==2)
    {   
        cout<<"Enter any two numbers :";
        cin>>num1>>num2;
        res=num1-num2;
        cout<<"Subtraction is :"<<res;
    }
    else if(choice==3)
    {
        cout<<"Enter any two numbers :";
        cin>>num1>>num2;
        res=num1*num2;
        cout<<"Multiplication is :"<<res;
    }
    else if(choice==4)
    {
        cout<<"Enter any two numbers :";
        cin>>num1>>num2;
        res=num1/num2;
        cout<<"Division is :"<<res;
    }

    else
    {
        cout<<"..... Choose correct choice .....";
    }

    return 0;
}
