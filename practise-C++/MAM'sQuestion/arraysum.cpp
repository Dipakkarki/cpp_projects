//Sum of arrays.
#include<iostream>
using namespace std;
class arrays
{
    public:
        int a[5];
        arrays()
        {
            int j;
            cout<<"Enter five numbers:"<<endl;
            for(j=0;j<5;j++)
            {
                cin>>a[j];
            }    
        }
        int add()
        {
            int i;
            int sum=0;
            for (i=0;i<5;i++)
            {
                sum=sum+a[i];
            }
            cout<<"Sum:"<<sum<<endl;
            return 0;
        }
};
            
int main()
{
    arrays a;
    a.add();
}
    