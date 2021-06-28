#include<iostream>
using namespace std;
class room
{
    public:
        double length,breadth,height;
        double calculatearea()
        {
            return length*breadth;

        }
        double calculatevolume()
        {
            return length*breadth*height;
        }
};

int main()
{
    room room1;
    room1.length=40;
    room1.breadth=30;
    room1.height=10;
    cout<<"AREA:"<<room1.calculatearea()<<endl;
    cout<<"VOLUME:"<<room1.calculatevolume()<<endl;
}