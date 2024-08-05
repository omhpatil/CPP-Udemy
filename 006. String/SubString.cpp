#include<iostream>
#include<cstring>
using namespace std;

//substring program
// int main()
// {
//     char s1[]="Programming";
//     char s2[]="kite";

//     if(strstr(s1,s2) != NULL)
//     cout<<strstr(s1,s2);
//     else
//     cout<<"Not Found"<<endl;
    
// }

//subchar program
int main()
{
    char s1[20]="Programming";
    
    cout<<strchr(s1,'r')<<endl; //strstr started from left 
    cout<<strrchr(s1,'r'); //strrstr started from right side

}