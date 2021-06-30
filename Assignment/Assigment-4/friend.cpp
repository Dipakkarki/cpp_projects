//WAP to add two private data of two different classes 
#include<iostream>
using namespace std;

class First
{
    friend  class Second;//now class second can access private data of class First 
    private:
        int num1;
    public:
        First()
        {
            int a;
            cout<<"Enter value of first number:"<<endl;
            cin>>a;
            num1=a;
        }
};

class Second
{
    
    private:
        int num2;
    public:
        Second() 
        {
            int b;
            cout<<"Enter value of second number:"<<endl;
            cin>>b;
            num2=b;
           
        }
        void sum(First obj1)
        {
            int sum=num2+obj1.num1;
            cout<<"Sum: "<<sum<<endl;

        }
};

int main()
{
    First obj1;
    Second obj2;
    obj2.sum(obj1);
    return 0;

}