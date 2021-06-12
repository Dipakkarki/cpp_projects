#include<iostream>
using namespace std;
void functionfirst(int a)
{
    cout<<"value of a before altering:"<<a<<endl;
    a=10;
    cout<<"value of a after altering:"<<a<<endl;

}
void functionReference (int &b)
{
    b=20;
    cout<<"value of b after altering:"<<b<<endl;
}
int main()
{
    int a=1;
    int b=2;
    functionfirst(a);
    functionReference(b);
    cout<<"value of a in main:"<<a<<endl;
    cout<<"value of b in main:"<<b<<endl;
}