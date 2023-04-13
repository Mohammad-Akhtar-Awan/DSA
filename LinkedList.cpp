#include<iostream>
using namespace std;

class LinkedList
{
	private:
		struct LinkedListNode
		{
			int value;						//Data Member
			struct LinkedListNode *next;	//Pointer	
		};
		LinkedListNode *head;				//Head
	public:
		LinkedList(void);
		//~LinkedList(void);
		void AppendNode(int);
		//void InsertNode(int);
		//void DeleteNode(int);
		void DisplayList(void);
};
LinkedList :: LinkedList()
{
	head = NULL;
}
void LinkedList :: AppendNode(int num)		//50
{
	LinkedListNode *newNode, *nodePtr;
	newNode = new LinkedListNode;
	newNode->value = num;					//50
	newNode->next = NULL;					//NULL
	
	if(!head)								//False because head = 10
	{
		head = newNode;						//head = 10
	}
	else
	{
		nodePtr = head;						//nodePtr = 10
		while(nodePtr->next != NULL)		//True
		{
			nodePtr = nodePtr->next;		//nodePtr = 40
		}
		nodePtr->next = newNode;
	}
}
void LinkedList :: DisplayList()
{
	LinkedListNode *nodePtr;
	nodePtr = head;
	
	while(nodePtr)
	{
		cout<<nodePtr->value<<endl;
		nodePtr = nodePtr->next;	
	}
}
int main()
{
	LinkedList LL;
	LL.AppendNode(10);
	LL.AppendNode(20);
	LL.AppendNode(30);
	LL.AppendNode(40);
	LL.AppendNode(50);
	
	LL.DisplayList();
}
