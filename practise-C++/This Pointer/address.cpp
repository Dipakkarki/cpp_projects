// normal pointer is a variable that holds address of some other variable
// this pointer is a variable that holds address of current object

#include<iostream>

using namespace std;

class mobile {
    int m = 10;
    
    public:
        void display() {
            cout<<"m = "<<m<<endl;
            cout<<"this->m = "<<this->m<<endl;
            cout<<this<<endl;
        }
};
int main() {
    mobile m1,m2;
    m1.display();//m1(a,b) ko ho ,m2 ko hoina
     m1.display();//m2 ko ho ,m1 ko hoina
    return 0;
}