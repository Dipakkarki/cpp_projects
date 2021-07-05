//addition of 2numbers

#include <iostream>
using namespace std;
template <class T1,class T2>
class Student
{
	T1 marks1;
	T2 marks2;
	public:
		Student( T1 m1, T2 m2 )
		{
			marks1 = m1;
			marks2 = m2;
		}
		T2 totalMarks()
		{
			return marks1 + marks2;
		}
};

int main()
{
	Student<int,int> s1 ( 45, 50 );
	Student<float,float> s2 ( 47.5853, 56.4123 );
	Student<int,float> s3 (55,64.258456);
	cout << "Total marks of student1 : " << s1.totalMarks() << endl;
	cout << "Total marks of student2 : " << s2.totalMarks() << endl;
	cout << "Total marks of student2 : " << s3.totalMarks() << endl;
	return 0;
}
