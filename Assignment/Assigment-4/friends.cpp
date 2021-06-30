//WAP to create class Sample with 2 float data members and member functions void
// getData() to input the values and one friend function float mean(Sample) to 
//calculate and return mean value  
#include<iostream>
using namespace std;
class Sample
{
    friend float mean(Sample s);//"sample s" can access private branch data.
    private:
        float num1,num2;
    public:
        void getData()
        {
            float a,b;
            cout<<"Input data:"<<endl;
            cin>>a>>b;
            num1=a;
            num2=b;
        }
};
float mean(Sample s)//object as parameter
{
    
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}
    
int main()
{
    Sample s;
    s.getData();
    cout<<"Mean: "<<mean(s)<<endl;
}