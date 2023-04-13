#include<iostream>
using namespace std;

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
int main()
{
	LinkedListUsingQueue LLUQ;
	LLUQ.EnqueueNode(10);
	LLUQ.EnqueueNode(20);
	LLUQ.EnqueueNode(30);
	LLUQ.Display();
	LLUQ.DequeueNode();
	LLUQ.DequeueNode();
	LLUQ.Display();
}
