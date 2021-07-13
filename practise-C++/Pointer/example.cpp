#include<iostream>
using namespace std;

        int main(){
        int a = 3; //[int value "ä" storing "3"as it's data]
        int* b;
        b = &a;  //[pointer variable]
        //&---->[addresh of operator]
       cout<<"The address of a is"<<&a<<endl;
       cout<<"The address of a is"<<b<<endl;
       
       //* ---->[dereference operator ]
       cout<<"the value of address b is"<<*b<<endl;


         //[pointer to pointer]
        int** c = &b;
        cout<<"The address of b is"<<&b<<endl;
       cout<<"The address of b is"<<c<<endl;
       cout<<"The value of address c is"<<*c<<endl;
        cout<<"the value at address value_at(value-at(c))is"<<**c<<endl; 
       return 0; 
        }