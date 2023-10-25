#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter Day :";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    
    case 2: 
        cout<<"Tuesday";
        break;

    case 3:
        cout<<"Wensday";
        break;

    case 4:
        cout<<"Thursday";
        break;

    case 5:
        cout<<"Friday";
        break;

    case 6:
        cout<<"Saturday";
        break;

    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Enter correct choice";
        break;
    }

    return 0;
}


// if we dont give break statement then it will be run code until the next break