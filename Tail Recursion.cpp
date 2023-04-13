#include<iostream>
using namespace std;

int TailFactorial(int num, int result)
{
	if(num == 0)
	{
		return result;
	}
	else
	{
		return TailFactorial(num-1,result*num);
	}
}
int main()
{
	cout<<TailFactorial(5,1);
}
