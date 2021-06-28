#include<iostream>
using namespace std;

class myclass
{
    private:
        int x;
    public:
        void setx(int i)
        {
            x=i;
        }
        int getx()
        {
            return x;
        }    
};

int main()
{
    myclass classes[4];//object as an array
    int j;
    for (j=0;j<4;j++)
    {
        classes[j].setx(j);
    }
    for (j=0;j<4;j++)
    {
        cout<<"Classes["<<(j)<<"]:"<<classes[j].getx()<<endl;
        
    }
}