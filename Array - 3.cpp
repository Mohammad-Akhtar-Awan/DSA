#include<iostream>
using namespace std;

int main()
{
	int index;
	int array[10];
	for(int i=0;i<10;i++)
	{
		cout<<"array["<<i<<"] : "<<&array[i]<<endl;
	}
	cout<<"Show the address of index : ";
	cin>>index;
	//cout<<"Address : "<<&array[0]+sizeof(int);//*index;
}
