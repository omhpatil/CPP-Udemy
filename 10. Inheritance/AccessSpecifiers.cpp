#include<iostream>
using namespace std;

class Rectangle{
    private: 
        int Length;                                 // we can access private member also using getter and setter method 
        int Breadth;

    public:

    void setLength(int l){           //setter for Length
        if(l>0)
            Length=l;
        else
            Length=0;
    }

    void setBreadth(int b){           // setter for Breadth
        if(b>0)
            Breadth=b;
        else
            Breadth=0;
    }

    int getLength(){
        return Length;         // getter for Length
    }

    int getBreadth(){
        return Breadth;         // getter for Breadth
    }
        int area(){
            return Length*Breadth;
        }

        int perimeter(){
            return 2*(Length*Breadth);
        }
};


int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);

    cout<<r.area();
    cout<<r.perimeter();    
}