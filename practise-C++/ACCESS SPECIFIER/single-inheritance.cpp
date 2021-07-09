#include<iostream>
using namespace std;
class animal
{
    public:
  void eat(){
      cout<<"eating"<<endl;
  }
};
class dog: public animal
   {
       public:
       void bark(){
           cout<<"barking";
        
       }
   };
   int main(void){
       dog d1;
       d1.eat();
       d1.bark();
   
    return 0;
}