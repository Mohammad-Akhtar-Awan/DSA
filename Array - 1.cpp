#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Please enter number of score : ";
	cin>>num;
	
	int score[num];
	for(int i=0;i<num;i++)
	{
		cout<<"Enter score # "<<i+1<<" : ";
		cin>>score[i];
	}
	int max = score[0];
	for(int i=0;i<num;i++)
	{
		if(max<score[i])
		{
			max = score[i];
		}
	}
	cout<<"Maximum value : "<<max;
	int min = score[0];
	for(int i=0;i<num;i++)
	{
		if(min>score[i])
		{
			min = score[i];
		}
	}
	cout<<"\nMinimum value : "<<min;
}
