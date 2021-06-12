#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int c;
    c=x;
    x=y; 
    y=c;
}
int main()
{
    int a,b;
    cout<<"Enter first and second variables:A and B"<<endl;
    cin>>a>>b;
    cout<<"The initially entered variables are:"<<a<<" and "<<b<<endl;
    swap(a , b);
    cout<<"the values after swapping are:"<<a<<" and "<<b<<endl;
}