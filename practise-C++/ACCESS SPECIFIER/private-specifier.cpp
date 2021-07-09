//Demonstration of private access specifier
#include<iostream>
using namespace std;
class Circle
{
    private:
        double radius;//it can't be access by derived class due to protected case.
    public:
        double compute_area(double r)
        {
            radius=r;//object class can't access but compute_area can access
            return 3.14*radius*radius;
        }

};
int main()
{
    Circle obj;
    //obj.radius=5.5  it is inaccessible case.
    cout<<"Area is: "<<obj.compute_area(5.5)<<endl;
    return 0; 
}