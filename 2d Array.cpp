#include<iostream>
using namespace std;

int main()
{
	int m[3][3];
	
	for(int r=0 ; r<3; r++)
	{
		for(int c=0; c<3; c++)
		{
			cout<<"Index["<<r<<"]["<<c<<"] : ";
			cin>>m[r][c];
		}
	}
	int mode = m[0][0]*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]))-m[0][1]*((m[1][0]*m[2][2])-(m[1][2]*m[2][0]))+m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
	cout<<"Mode of 3x3 matrix : "<<mode;
}
