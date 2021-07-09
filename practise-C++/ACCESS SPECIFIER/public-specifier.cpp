//C++ program to demonstrate public specifier
#include<iostream>
using namespace std;
class Circle
{
    public:
        double radius;

        double compute_area()
        {
            double area=3.14*radius*radius;
            return area;
        }
};
int main()
{
    Circle obj;
    obj.radius=5.5; //object le direct access payo 

    cout<<"Radius is :"<<obj.radius<<endl;
    cout<<"Area is :"<<obj.compute_area()<<endl;
    return 0;
    
}