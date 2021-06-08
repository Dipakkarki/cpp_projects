#include<iostream>
using namespace std;

int add(int a,int b)
{
    cout<<"sum=:"<<a+b<<endl;
    return 0;
}
double add (double a, int b, double c)
{
    cout<<"sum="<<a+b+c<<endl;
    return 0;
}
double add (int a, double b)
{
    cout<<"sum="<<a+b<<endl;
    return 0;
}
int main()
{
    add(10,20);
    add(10.5,10,2.5);
    add(10.5,10,2);
    return 0;
}