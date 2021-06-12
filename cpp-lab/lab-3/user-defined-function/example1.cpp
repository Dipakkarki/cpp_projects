//using without argument and no return value calc. of area of triangle 
#include<iostream>
using namespace std;
void getarea();
int main()
{
    getarea();
} 
void getarea()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=((0.5)*base*height);
    cout<<"area of triangle is:"<<area<<endl;         
}