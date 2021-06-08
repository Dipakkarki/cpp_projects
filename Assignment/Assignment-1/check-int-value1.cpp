#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout <<"enter the number:"<<endl;
    cin >> num;
    if (num > 0)
    cout << num << "The number is positive.";
    else if (num < 0)
    cout << num << "The number is negatiive. ";
    else
    cout << num << "The number is zero. ";
    return 0;

}