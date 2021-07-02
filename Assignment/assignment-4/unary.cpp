#include <iostream>
using namespace std;
class unary
{
    private:
        int a,b,c;
    public:
        void getdata(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        //return type operator op() ++ 
        void operator ++()
        {
            a=a+2;
            b=b+2;
            c=c+2;
        }
        void display()
        {
            cout<<"Value of a:"<<a<<endl;
            cout<<"Value of b:"<<b<<endl;
            cout<<"Value of c:"<<c<<endl;
        }
};

int main()
{
    unary obj1;
    obj1.getdata(3,4,5);
    cout<<"Before operator overloading:"<<endl;
    obj1.display();
    ++obj1;
    cout<<"After operator overloading:"<<endl;
    obj1.display();
}