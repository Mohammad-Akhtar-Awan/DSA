#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	bool Arr[5][5];
	for(int r = 0; r<5; r++)
	{
		for(int c=0; c<5; c++)
		{
			cout<<"Enter status of index ["<<r<<"]["<<c<<"] : ";
			cin>>str;
			if(str == "Friend")
			{
				Arr[r][c] = 1;
			}
			else
			{
				Arr[r][c] = 0;
			}
		}
	}
	cout<<"# | 0 1 2 3 4"<<endl;
	cout<<"--+-----------"<<endl;
	for(int r = 0; r<5; r++)
	{
		cout<<r<<" | ";
		for(int c=0; c<5; c++)
		{
			if(Arr[r][c] == true)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}
