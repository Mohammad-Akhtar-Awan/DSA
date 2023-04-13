#include<iostream>
using namespace std;

int main()
{
	int A[3][3],B[3][3],C[3][3] = {0};
	
	for(int r=0 ; r<3; r++)
	{
		for(int c=0; c<3; c++)
		{
			cout<<"A["<<r+1<<"]["<<c+1<<"] : ";
			cin>>A[r][c];
		}
	}
	for(int r=0 ; r<3; r++)
	{
		for(int c=0; c<3; c++)
		{
			cout<<"B["<<r+1<<"]["<<c+1<<"] : ";
			cin>>B[r][c];
		}
	}
	for(int r=0; r<3; r++)		//r = 0
	{
		for(int c=0; c<3; c++)	//c = 0,1,2
		{
			for(int k=0; k<3; k++)	//k = 0,1,2,3
			{
				C[r][c] = C[r][c]+A[r][k]*B[k][c];
				//C[0][0] = C[0][0]+A[0][0]*B[0][0]	//0+1*1=1
				//C[0][0] = C[0][0]+A[0][1]*B[1][0]	//1+2*4=9
				//C[0][0] = C[0][0]+A[0][2]*B[2][0]	//9+3*7=30
			}
		}
	}
	//Display LOOP
	for(int r=0; r<3; r++)		//r = 0
	{
		for(int c=0; c<3; c++)	//c = 0,1,2
		{
			cout<<C[r][c]<<"\t";
		}
		cout<<endl;
	}
}
