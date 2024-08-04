#include<iostream>
using namespace std;

class Student
{
    private:
        int rollno;
        string name;
        int marathi,hindi,english;

    public:
        Student(int r,string n,int m,int h,int e)
        {
            rollno=r;
            name=n;
            marathi=m;
            hindi=h;
            english=e;
        }

        int total()
        {
            return marathi+hindi+english;
        }

        char grade()
        {
            float average=total()/3;

            if(average>60)
                return 'A';
            else if(average>=40 && average<=60)
                return 'B';
            else
                return 'C';
        }

        
        float averageMarks() 
        {
            return total() / 3.0; 
        }


};

int main()
{
    int rollno;
    cout<<"Enter rollno :";
    cin>>rollno;
    
    string name;
    cout<<"Enter name :";
    cin.ignore(); // Clear input buffer
    getline(cin,name);

    int m,h,e;
    cout<<"Enter marks :";
    cin>>m>>h>>e;


    Student S(rollno,name,m,h,e);

    cout<<"Total is "<<S.total()<<endl;
    cout<<"Average is "<<S.averageMarks()<<endl;
    cout<<"Grade is "<<S.grade();

    return 0;
}