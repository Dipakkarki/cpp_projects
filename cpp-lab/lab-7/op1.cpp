//Binary overloading.
#include<iostream>
using namespace std;
class Binary
{
    int num1,num2;

    public:
         
        Binary()
        {
            num1=0;
            num2=0;
        }
        Binary(int num_1 ,int num_2)
        {
            num1=num_1;
            num2=num_2;
        }

        Binary operator +(Binary B1)
        {
            Binary temp;

            //cout<<"Value of B1.a" <<B1.a;
            //cout<<"Value of B1.b" <<B1.b;

            //cout<<"Value of temp.a" <<temp.a;
            //cout<<"Value of temp.b" <<temp.b;

            temp.num1 = num1 + B1.num1 ;
            temp.num2 = num2 + B1.num2;
            return temp;
        }

        void display()
        {
            cout<<"Addition of first numbers "<<num1<<endl;
            cout<<"Addition of second numbers "<<num2<<endl;
        }
      
};
int main()
{
    Binary B1(10,15);
    Binary B2(25,30);
    Binary B3 ;

    //if BInary B3(10,10);
    //Binary B4 ;
    
    B3 = B1 + B2;
      
   B3.display();

   // B4 = B1 + B2 + B3;  first add B2 + B3 and then sum of these two adds with B1
      //B4.disp;ay();    

}