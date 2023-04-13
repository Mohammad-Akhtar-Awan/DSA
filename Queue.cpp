#include<iostream>
using namespace std;

class IntQueue{
	public:
		int *QueueArray;
		int QueueSize;
		int rear, front;
	public:
		IntQueue(int size)					//Parameterized Constructor
		{
			QueueArray = new int[size];
			QueueSize = size;
			rear = -1;
			front = -1;
		}
		void Enqueue(int num)
		{
			if(isFull())
			{
				cout<<"The Queue is Full...";
			}
			else
			{
				if(front == -1)
					front = 0;
				rear++;
				QueueArray[rear] = num;
			}
		}
		int Dequeue()
		{
			int data;
			if(isEmpty())
			{
				cout<<"The Queue is Empty...";
			}
			else
			{
				front++;
				data = QueueArray[front];
			}
			return data;
		}
		bool isFull()
		{
			bool status;
			if(rear == QueueSize-1)
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
			if(rear == front)
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
				cout<<"The Queue is Empty...";
			}
			else
			{
				int f = front;		//-1
				while(f <= rear)
				{
					cout<<"QueueArray["<<f<<"] : "<<QueueArray[f]<<endl;
					f++;
				}
			}
		}
};
int main()
{
	IntQueue IQ(10);
	IQ.Enqueue(10);			//0
	IQ.Enqueue(20);			//1
	IQ.Enqueue(30);			//2
	IQ.Enqueue(40);			//3
	IQ.Enqueue(50);			//4
	IQ.Dequeue();		//10
	IQ.Dequeue();		//20
	IQ.Dequeue();		//30
	IQ.Dequeue();		//40
	IQ.Dequeue();		//50
	IQ.Enqueue(25);			//5
	IQ.Enqueue(35);			//6
	IQ.Enqueue(45);			//7
	IQ.Enqueue(55);			//8
	IQ.Enqueue(65);			//9
	IQ.Dequeue();		//25
	IQ.Dequeue();		//35
	IQ.Dequeue();		//45
	IQ.Dequeue();		//55
	IQ.Dequeue();		//65
	IQ.Dequeue();		// The Queue is Empty...
	IQ.Enqueue(75);
}
