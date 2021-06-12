//using with argument and no return value calc.of area of triangle

#include<iostream>
using namespace std;
void getarea(float,float);
int main()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    getarea(base,height);
      
} 
void getarea(float b,float h)
{
    float area;
    area=((0.5)*b*h);
    cout<<"area of triangle is:"<<area<<endl;         
}