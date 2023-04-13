#include<iostream>
using namespace std;

class IntStack{
	public:
		int *StackArray;
		int StackSize;
		int top;
	public:
		IntStack(int size)					//Parameterized Constructor
		{
			StackArray = new int[size];
			StackSize = size;
			top = -1;
		}
		void Push(int num)
		{
			if(isFull())
			{
				cout<<"The stack is Full...";
			}
			else
			{
				top++;
				StackArray[top] = num;
			}
		}
		void Pop()
		{
			if(isEmpty())
			{
				cout<<"The stack is Empty...";
			}
			else
			{
				top--;
			}
		}
		bool isFull()
		{
			bool status;
			if(top == StackSize-1)
			{
				status = true;
			}
			else
			{
				status = false;
			}
			return status;
		}
		bool isEmpty()
		{
			bool status;
			if(top == -1)
			{
				status = true;
			}
			else
			{
				status = false;
			}
			return status;
		}
		void Display()
		{
			if(isEmpty())
			{
				cout<<"The stack is Empty...";
			}
			else
			{
				int t = top;
				while(t >= 0)
				{
					cout<<"StackArray["<<t<<"] : "<<StackArray[t]<<endl;
					t--;
				}
			}
		}
};
int main()
{
	IntStack IS(10);
	IS.Push(10);			//index 0
	IS.Push(5);				//index 1
	IS.Push(25);			//index 2			
	IS.Push(6);				//index 3
	IS.Push(16);			//index 4
	IS.Push(15);			//index 5
	IS.Push(125);			//index 6 ========>Top			
	IS.Push(116);			//index 7
	IS.Push(110);			//index 8
	IS.Push(255);			//index 9
	IS.Display();
	cout<<"\nAfter Pop\n\n";
	IS.Pop();//255
	IS.Pop();//110
	IS.Pop();//116
	IS.Pop();//125
	IS.Pop();//15
	//IS.Pop();//16
	//IS.Pop();//6
	//IS.Pop();//25
	//IS.Pop();//5
	//IS.Pop();//10
	IS.Display();
	cout<<"\nAfter Push\n\n";
	IS.Push(147852);
	IS.Display();
}
