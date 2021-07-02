#include <iostream>
using namespace std;
class unary
{
    private:
        int a,b,c;
    public:
        void getdata(int x,int y,int z)
            {       
                a = x;
                b = y;
                c = z;
            }
//return type operator op()  --
        void operator -()
        {
            a = -a;
            b = -b;
            c = -c;
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
    unary u1;
    u1.getdata(3,4,-5);
    cout<<"Befor operator overloading:"<<endl;
    u1.display();
    -u1;
    cout<<"After operator overloading:"<<endl;
    u1.dispaly();
}

