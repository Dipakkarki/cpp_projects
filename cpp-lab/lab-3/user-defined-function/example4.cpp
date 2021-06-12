//using with argument N return value calc.of area of triangle
#include<iostream>
using namespace std;
float getarea(float,float);
int main()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=getarea(base,height);
    cout<<"area of triangle is:"<<area<<endl;    
} 
float getarea(float b,float h)
{
    float area;
    area=((0.5)*b*h);        
    return area;
}