#include<iostream>
using namespace std;

class A{
	public:
		A()
		{
			cout<<"This is Constructor of class A...\n";
		}
		void displayA()
		{
			cout<<"This is class A...";
		}
};
class B{
	public:
		B()
		{
			cout<<"This is Constructor of class B...\n";
		}
		void displayB()
		{
			cout<<"This is class B...";
		}
};
class C : public B{
	public:
		C()
		{
			cout<<"This is Constructor of class C...";
		}
		void displayC()
		{
			cout<<"This is class C...";
		}
};
int main()
{
	C cee;
}
