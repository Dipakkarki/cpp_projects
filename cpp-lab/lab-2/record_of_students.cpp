#include <iostream>
using namespace std;

struct student
{
    char name[50];
  char address[50];
    int roll;
} s[3];

int main()
{

    for(int i = 0; i < 3; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter address: ";
        cin >> s[i].address;

        cout << endl;
    }

    for(int i = 0; i < 3; ++i)
    {
        cout << "roll: " <<i+1<< endl;
        cout << "name: " <<s[i].name<< endl;
        
        cout << "address: " <<s[i].address<< endl;
    }

    return 0;
}
