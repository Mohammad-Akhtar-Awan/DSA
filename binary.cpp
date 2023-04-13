#include<iostream>
#include<fstream>
using namespace std;

class student{
	int roll;
	char name[25];
	float marks;
	
	void getdata()
	{
		cout<<"Enter Roll : ";
		cin>>roll;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Marks : ";
		cin>>marks;
	}
	public:
		void AddRecord()
		{
			fstream f;
			student stu;
			f.open("Student.dat",ios::app | ios::binary);
			stu.getdata();
			f.write((char *)&stu, sizeof(stu));
			f.close();
		}
};
int main()
{
	student s;
	s.AddRecord();
}
