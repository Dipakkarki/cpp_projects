//addition of feet & inches
#include<iostream>
using namespace std;
class dist
{
	float feet,inch;
	public:
		void read();
		void add(dist,dist);
		void display();
		void sub(dist,dist);
};
void dist::read()
{
	cout<<"Enter feet:";
	cin>>feet;
	cout<<"Enter inch:";
	cin>>inch;
	cout<<endl;
}
void dist::add(dist d1,dist d2)
{
	feet=d1.feet+d2.feet;
	inch=d1.inch+d2.inch;
}
void dist::sub(dist d3,dist d4)
{
	feet=0;
	inch=d4.inch-d3.inch;
	if(inch<0)
	{
		inch=inch+12;
		feet=feet-1;
	}
	feet=feet+d4.feet-d3.feet;
}
void dist::display()
{
	cout<<"Feet:"<<feet<<"\t Inch:"<<inch<<endl;
}
int main()
{
	dist first,second,sum,diff;
	cout<<"Enter first distance:"<<endl;
	first.read();
	cout<<"Enter second distance:"<<endl;
	second.read();
	sum.add(first,second);
	cout<<"The sum is:"<<endl;
	sum.display();
	diff.sub(first,second);
	cout<<"The difference is:"<<endl;
	diff.display();
	return 0;
}
