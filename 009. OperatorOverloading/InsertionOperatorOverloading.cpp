// #include<iostream>
// using namespace std;

// int main()
// {
//     how insertion operator is done
    
//     Complex c2(10,20);
    
//     cout<<c1;  it is not going display direct, we have to overload insertion operator for that 

//     Solution 1:

//     make method like,

//     void display()
//     {
//         cout<<real<<"+i"<<img;
//     }

//     Solution 2:

//     making frined function we can overload insertion operator
//     as it is frined function we can write inside the class we write this outside the class

//     frined ostream& operator<<(ostream &o, Complex &c1);  // inside the class

//      ostream& operator<<(ostream &o, Complex &c1); // outside the class
//     {
//         o<<c1.real<<"+i"<<c2.img;
//     }
// }