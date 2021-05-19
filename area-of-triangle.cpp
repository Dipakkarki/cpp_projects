#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,S,B,H,Area,Area1;
cout<<"Enter the value of first side:";
cin>>a;
cout<<"Enter the value of second side:";
cin>>b;
cout<<"Enter the value of third side:";
cin>>c;
cout<<"Enter the value of Base:";
cin>>B;
cout<<"Enter the value of Hight:";
cin>>H;
S=(a+b+c)/2;
Area=sqrt(S*(S-a)*(S-b)*(S-c));
cout<<"Area of triangle with sides:"<<Area;
Area1=(0.5*B*H);
cout<<"Area of triangle with base and hight :"<<Area1;
getch();
}