#include <iostream>
using namespace std;

class box
{
private:
    double length, breadth, height;

public:
    box(double len, double bdth, double hgt)
    {
        cout << "Constructor is called" << endl;
        length = len;
        breadth = bdth;
        height = hgt;
    }
    double volume()
    {
        return length * breadth * height;
    }
};
int main()
{
    box box1(4, 6.5, 7.4), box2(6.6, 5.4, 7.8);
    box *ptrbox;
    cout << "Address of box1 variable " << &box1 << endl;

    //Pointer is such variable which carry address of variable
    ptrbox = &box1;

    //access the member function using member access oprerator(->)
    cout << "Volume of box1 " << ptrbox->volume() << endl;

    //Set the address of second object.
    ptrbox = &box2;
    cout << "Volume of box2 " << ptrbox->volume() << endl;

    return 0;
}