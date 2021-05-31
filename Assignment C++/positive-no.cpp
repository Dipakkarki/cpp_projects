\\Program to print positive number entered by the user.
#include<iostream>
using namespace std;
float main ()
{
    int num;
    cout <<"enter the number:"<<endl;
    cin >> num;
    if (num >= 0)
    cout << num << "The number is positive.";
    else
    cout << num << "The number is negatiive. ";
    return 0;

}