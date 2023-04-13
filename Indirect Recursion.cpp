#include<iostream>
using namespace std;

bool isEven(int);
bool isOdd(int);


int main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	if(isEven(num))
	{
		cout<<"Even...";
	}
	else
	{
		cout<<"Odd...";
	}
}
bool isEven(int num)
{
	if(num == 0)
		return true;
	else
		return isOdd(num - 1);
}
bool isOdd(int num)
{
	if(num == 0)
		return false;
	else
		return isEven(num - 1);
}
