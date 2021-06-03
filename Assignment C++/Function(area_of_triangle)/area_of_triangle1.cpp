# include <iostream>
using namespace std;
void area();
int main()
{
area();
return 0;
}
void area()
{
float B,H,area;
cout<<"Enter the value of Base:";
cin>>B;
cout<<"Enter the value of Hight:";
cin>>H;
area=(0.5*B*H) ;
cout<<"Area of triangle with base and hight :\n"<<area;
}