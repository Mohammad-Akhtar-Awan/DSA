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
class LinkedListUsingQueue
{
	public:
		struct Node
		{
			int data;
			struct Node *next;
		};
		Node *rear;
		Node *front;
	public:
		LinkedListUsingQueue()
		{
			rear = NULL;
			front = NULL;
		}
		void EnqueueNode(int num)	//Insertion at Last
		{
			Node *newNode;
			newNode = new Node;		//Create New Node...
			
			newNode->data = num;	//Assign data to new Node...
			newNode->next = NULL;
			
			if(!rear && !front)
			{
				front = rear = newNode;
			}
			else
			{
				rear->next = newNode;
				rear = newNode;
			}
		}
		void DequeueNode()
		{
			Node *nodePtr;
			nodePtr = front;
			if(!front)				//front == NULL
			{
				cout<<"List is already empty...";
			}
			if(front == rear)
			{
				front = rear = NULL;
			}
			else
			{
				front = front->next;
			}
			delete nodePtr;
		}
		void Display()
		{
			Node *nodePtr;
			nodePtr = front;
			cout<<"*** Output of Linked List Using Queue***\n";
			while(nodePtr != NULL)
			{
				cout<<"=> "<<nodePtr->data<<endl;
				nodePtr = nodePtr->next;
			}
		}
};
void Menu()
{
	char choice;
	cout<<"Press 1 : Static Queue (Using Array)\n";
	cout<<"Press 2 : Dynamic Queue (Using Linked List)\n";
	cout<<"Please Enter your choice : ";
	cin>>choice;
	
	if(choice == '1')
	{
		int size, subchoice;
			cout<<"Enter Array Size : ";
			cin>>size;
			IntQueue IQ(size);
			
			//Rest of code paste here...
			cout<<"\n**************\n";
			cout<<"**** Menu ****\n";
			cout<<"Press 1 : Enqueue Data \n";
			cout<<"Press 2 : Dequeue Data \n";
			cout<<"Press 3 : Display Data \n";
			cout<<"Press any button : Exit \n";
			cout<<"Please Enter your choice : ";
			cin>>subchoice;
			cout<<"\n*******************\n";
			
			if(subchoice == 1)
			{
				int num;
				cout<<"Enter number : ";
				cin>>num;
				IQ.Enqueue(num);
			}
			else if(subchoice == 2)
			{
				IQ.Dequeue();
			}
			else if(subchoice == 3)
			{
				IQ.Display();
			}
	}
	else if(choice == '2')
	{
		int subchoice;
		LinkedListUsingQueue LLUQ;
			
			//Rest of code paste here...
			cout<<"\n**************\n";
			cout<<"**** Menu ****\n";
			cout<<"Press 1 : Enqueue Data \n";
			cout<<"Press 2 : Dequeue Data \n";
			cout<<"Press 3 : Display Data \n";
			cout<<"Press any button : Exit \n";
			cout<<"Please Enter your choice : ";
			cin>>subchoice;
			cout<<"\n*******************\n";
			
			if(subchoice == 1)
			{
				int num;
				cout<<"Enter number : ";
				cin>>num;
				LLUQ.EnqueueNode(num);
			}
			else if(subchoice == 2)
			{
				LLUQ.DequeueNode();
			}
			else if(subchoice == 3)
			{
				LLUQ.Display();
			}
	}
	else
	{
		cout<<"Invalid Choice...";
	}
}
int main()
{
	Menu();
}
