#include<iostream>
using namespace std;

int factorial(int num)				//num = 1
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return num * factorial (num - 1);	 
	}
}
int main()
{
	int num;
	
	cout<<"Enter Number : ";
	cin>>num;
	
	cout<<num<<"! : "<<factorial(num);
}
