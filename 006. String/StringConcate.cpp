#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "Om ";
    char s2[] = "Patil";

    strcat(s1, s2); // Concatenate s2 to s1 using the strcat function

    cout << s1;

    return 0;
}
