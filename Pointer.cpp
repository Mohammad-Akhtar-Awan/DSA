#include<iostream>
using namespace std;

void func(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	cout<<"During swape function call\n";
	cout<<"Value of x : "<<*x<<" & address of x : "<<x<<endl;
	cout<<"Value of y : "<<*y<<" & address of y : "<<y<<endl;	
}
int main()
{
	int a = 10;
	int b = 20;
	cout<<"Before swape function call\n";
	cout<<"Value of a : "<<a<<" & address of a : "<<&a<<endl;
	cout<<"Value of b : "<<b<<" & address of b : "<<&b<<endl;
	
	func(&a,&b);
	
	cout<<"After swape function call\n";
	cout<<"Value of a : "<<a<<" & address of a : "<<&a<<endl;
	cout<<"Value of b : "<<b<<" & address of b : "<<&b<<endl;
}
