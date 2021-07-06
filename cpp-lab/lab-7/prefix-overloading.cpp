#include<iostream>
using namespace std;
class Unary
{
    int num1;

    public:
      void getdata( int x )
      {
           num1 = x;
           

      }

      Unary operator ++() //returntype operator symbol()
      {
           Unary Num2;
           Num2.num1 = ++num1 ;  // increases value of num1 by 1
            return Num2;
      }

     void display()
      {
           cout<<"Number 1  "<<num1<<endl; 
            
      }

};
int main()
{
     Unary U1 ,U2 ;

     U1.getdata(12);
     //U1.operator-();
     U2 = ++U1; // can be called using operator
     U2.display(); 

}