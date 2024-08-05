#include<iostream>
using namespace std;

class Rectangle{

    private:
        int length,breadth;

    public:

        void setLength(int len){
            if(len>=0){
                length=len;
            }     
            else{
                cout << "Length cannot be negative. Exiting program." << endl;
                exit(EXIT_FAILURE);
            }        
            
        }

        void setBreadth(int bre){
            if(bre>=0){
                breadth=bre;
            }
            else{
                cout << "Breadth cannot be negative. Exiting program." << endl;
                exit(EXIT_FAILURE);
            }    
            
        }

        int getLength(){  // this is optional just to knowing which length and breadth we have takene
            return length;
        }   

        int getBreadth(){
            return breadth;
        }

        int area(){
            return length * breadth;
        }

};

int main()
{
    Rectangle r;

    r.setLength(10);
    r.setBreadth(20);

    cout<<r.getBreadth(); // accessing breadth we have taken
    cout<<r.getLength();  // accessing length we have taken
    cout<<r.area();

    return 0;
}