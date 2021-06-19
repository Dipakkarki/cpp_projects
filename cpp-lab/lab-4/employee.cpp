//To Define a class employee with data members ID,Name,Salary in Tabular form. 
#include<iostream>
using namespace std;
class employee 
{
    public:
        char name[50];
        int ID[5];
        double salary[5];
        int n;
        void input()
        {
            for (n=0;n<5;n++)
            {
                cout<<"Enter Name:"<<endl;
                cin>>name[n];
                cout<<"Enter ID:"<<endl;
                cin>>ID[n];
                cout<<"Enter Salary:"<<endl;
                cin>>salary[n];

            }       
            
        }
        void display()
        {
            for (n=0;n<5;n++)
            {
                cout<<ID[n];
                cout<<"\t"<<name[n];
                cout<<"\t"<<salary[n]<<endl;

            }          
            
        }
               
        
};
int main()
{
    int n;
    employee s;
    s.input();
    cout<<"ID:"<<"\tName:"<<"\tSalary:"<<endl;    
    s.display();
     
}