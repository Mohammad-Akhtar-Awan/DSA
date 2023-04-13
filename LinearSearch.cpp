#include <iostream>
using namespace std;
// Linearly search x in arr[].  If x is present then return its 
// location,  otherwise return -1
int StartSearch(int arr[], int nsize, int x)
{
    int i;
    for (i=0; i<nsize; i++)
    {
        if (arr[i] == x)
        {
        	return i+1;		//First Time
		}
	}
	return -1;
}
int EndSearch(int arr[], int nsize, int x)
{
	int i;
    for (i=nsize-1; i>0; i--)
    {
        if (arr[i] == x)
        {
        	return i+1;
		}
	}
}
// Recursive
int recursiveLinearSearch(int array[],int key,int size) {
	size=size-1;
	if(size <0) {
		return -1;
	} else if(array[size]==key) {
		return 1;
	} else {
		return recursiveLinearSearch(array,key,size);
	}
}
// Display 
void display(int arr[],int nsize){
	for(int i=0;i<nsize;i++){
		cout<<arr[i]<<",";
	}
	cout<<"\b \b"<<endl;
}

int main() {
	int item, nsize=16;
	int arr[nsize] = {2,3,4,5,6,2,3,44,5,3,5,3,4,7,8,99};
	display(arr, nsize);
    cout << "Enter the item you want to find: ";
    cin >> item;
    cout << "Item is found at location " <<StartSearch(arr,nsize,item) << " & " <<EndSearch(arr,nsize,item)<< endl;
   /* int key;
    cout<<"Enter Key To Search  in Array: ";
	cin>>key;
	int result;
	result=recursiveLinearSearch(arr,key,nsize);
	if(result==1) {
		cout<<"Key Found in Array  ";
	} else {
		cout<<"Key NOT Found in Array  ";
	}
    */
   	return 0;
}

