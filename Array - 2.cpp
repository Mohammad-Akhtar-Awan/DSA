//Given the height measurements of students in a class
//Output the names of those students who are taller than average

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number of student : ";
	cin>>num;
	string name[num];
	float height[num];
	
	for(int i = 0;i<num;i++)
	{
		cout<<"Student # "<<i+1<<endl;
		cout<<"Enter student name : ";
		cin>>name[i];
		cout<<"Enter student height : ";
		cin>>height[i];	
	}
	float average = 0;
	for(int i=0;i<num;i++)
	{
		average = average + height[i];
	}
	average = average / num;
	cout<<"Average height : "<<average<<endl;
	for(int i = 0;i<num;i++)
	{
		if(height[i]>average)
			cout<<name[i]<<","<<height[i]<<endl;
	}
}
