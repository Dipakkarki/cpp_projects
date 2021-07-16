//A program to call function of base class by objects of derived class with application of pointer

#include <iostream>
using namespace std;
class Shapes
{
protected:
    int width, height;

public:
    Shapes() //Default Constructor
    {
    }
    Shapes(int x, int y)
    {
        width = x;
        height = y;
    }
    void area()
    {
        cout << "Area of shape is: " << height * width << endl;
    }
};
class Rectangle : public Shapes
{
public:
    Rectangle(int x, int y)
    {
        width = x;
        height = y;
    }
    void area()
    {
        cout << "Area of Rectangle: " << width * height << endl;
    }
};
class Triangle : public Shapes
{
public:
    Triangle(int x, int y)
    {
        width = x;
        height = y;
    }
    void area()
    {
        cout << "Area of Triangle: " << 0.5 * width * height << endl;
    }
};
int main()
{
    Shapes *s1; // s1 is a pointer of base class
    Rectangle r1(10, 20);
    Triangle t1(20, 30);
    s1 = &r1; // Storing address of r1 in pointer variable
    s1->area();
    s1 = &t1; // Storing address of r2 in pointer variable
    s1->area();
    //The output is area function of base class
    return 0;
}