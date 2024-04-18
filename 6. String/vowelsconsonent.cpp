#include <iostream>
using namespace std;

int main()
{
    string str = "How Are you";
    int vow = 0, cons = 0, space = 0;

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            ++vow;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            ++cons;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
    }

    cout << vow << endl << cons << endl << space;
}