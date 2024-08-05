// static members belog to a class they does not belog to object that is why
// for many object creating they require only one time same amount of memory 
// for every object they do not require rememory creation

// static members function can only acess data members of class they so not access data members without declaring static
// eg--> static int i = 10 can accessed by static int show(), cannot access int i = 5 (bcoz it is not declared as static)

#include<iostream>
using namespace std;

class test{
    public:
        int a;
        static int count;

        test(){
            a=10;
            count++;
        }

        static int getCount(){
            return count;
        }  

};

int test::count=10;

int main()
{
    test t1,t2;
    cout<<test::getCount()<<endl;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    return 0;
}