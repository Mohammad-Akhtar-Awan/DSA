#include<iostream>
using namespace std;

class IntCircularQueue{
	public:
		int *QueueArray;
		int QueueSize;
		int rear, front;
	public:
		IntCircularQueue(int size)					//Parameterized Constructor
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
				if ( front == -1 )
					front = 0;
				rear = (rear + 1) % QueueSize;
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
				data = QueueArray[front];
				if (front == rear)
				{
					front = rear = -1;
				}
				else
					front = (front + 1) % QueueSize;
			}
			return data;
		}
		bool isFull()
		{
			bool status;
			if((rear + 1) % QueueSize == front )
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
			if(rear == -1 && front == -1)
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
				int i;
				if (front <= rear) // case: 1
				{
					for (int i = front; i <= rear; i++)
					{
						cout << "CircularQueueArray[" << i << "] = " << QueueArray[i]<< endl;
					}
				}
				else
				{ // case: 2, front > rear
					i = 0;
					while (i <= rear)
					{
		 				cout << "CircularQueueArray[" << i << "] = " << QueueArray[i]<< endl;
						i++;
					}
					i = front;
					while (i < QueueSize)
					{
		 				cout << "CircularQueueArray[" << i << "] = " << QueueArray[i]<< endl;
						i++;
					}	 
				}	 
			}
		}
};
int main()
{
	IntCircularQueue IQ(10);
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
	IQ.Enqueue(75);			//0
	IQ.Enqueue(85);			//1
	IQ.Enqueue(95);			//2
	IQ.Enqueue(105);		//3
	IQ.Display();
}
