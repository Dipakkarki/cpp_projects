//Demonstration of protected access specifier
#include<iostream>
using namespace std;
class Parent
{
    protected:
        int id_protected; //it can be access by derived class indirectly.
};
class Child: public Parent
{
    public:
        void setId(int id)
        {
            id_protected =id;
        }
        void displayId()
        {
            cout<<"id_protected is:"<<id_protected<<endl;
        }
};
int main()
{
    Child obj1;
    obj1.setId(81);
    obj1.displayId();
    return 0;

}
