#include <iostream>
using namespace std;

struct student
{
    char name[50];
    char address[50];
    int roll;
    
};

int main() 
{
    student s;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Address: ";
    cin >> s.address;
    cout << "Enter Roll no:";
    cin >> s.roll;
    cout << "Name: " << s.name << endl;
    cout << "Address: " << s.address<< endl;
    cout << "Roll: " << s.roll << endl;
    return 0;
}