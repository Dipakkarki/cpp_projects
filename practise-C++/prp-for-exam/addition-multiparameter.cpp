//using different paremeters for adding the terms.
#include <iostream>
using namespace std;
template <class T1,class T2>
class Addition
{
	T1 num1;
	T2 num2;
	public:
		Addition( T1 m1, T2 m2 )
		{
			num1 = m1;
			num2 = m2;
		}
		void display()
		{
			cout<<"First num="<<num1<<endl;
			cout<<"Second num="<<num2<<endl;
		}
		T2 total()
		{
			return num1 + num2;
		}
};

int main()
{
	Addition<int,int> s1 ( 45, 50 );
	Addition<float,float> s2 ( 47.5853, 56.4123 );
	Addition<int,float> s3 (55,64.258456);
	s1.display();
	cout << "Sum of two integer number : " <<s1.total() << endl;
	s2.display();
	cout << "Sum of two float number:  " << s2.total() << endl;
	s3.display();
	cout << "Sum of one integer and one float number :" << s3.total() << endl;
	float result;
	result=s1.total()+s2.total()+s3.total();
	cout<<"Final sum of all numbers:"<<result;
	return 0;
}
