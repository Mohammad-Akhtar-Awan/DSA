#include <iostream>
#define MAX 12
using namespace std;

struct Vertex {
   char label;
   bool visited;
};
//queue variables

int queue[MAX];
int rear = -1;
int front = 0;
int queueItemCount = 0;

//graph variables

//array of vertices
struct Vertex* lstVertices[MAX];

//adjacency matrix
int adjMatrix[MAX][MAX];

//vertex count
int vertexCount = 0;

//queue functions

void insert(int data) {
   queue[++rear] = data;
   queueItemCount++;
}

int removeData() {
   queueItemCount--;
   return queue[front++]; 
}

bool isQueueEmpty() {
   return queueItemCount == 0;
}

//graph functions

//add vertex to the vertex list
void addVertex(char label) {
  Vertex *vertex = new Vertex;
   vertex->label = label;  
   vertex->visited = false;     
   lstVertices[vertexCount++] = vertex;
}

//add edge to edge array
void addEdge(int start,int end) {
   adjMatrix[start][end] = 1;
   adjMatrix[end][start] = 1;
}
//display the vertex
void displayVertex(int vertexIndex) {
  cout<<lstVertices[vertexIndex]->label<<" ";
 
}       

//get the adjacent unvisited vertex
int getAdjUnvisitedVertex(int vertexIndex) {
   int i;
	
   for(i = 0; i<vertexCount; i++) {
      if(adjMatrix[vertexIndex][i] == 1 && lstVertices[i]->visited == false)
         return i;
   }
	
   return -1;
}

void breadthFirstSearch(int node) {
   
   int i;

   //mark first node as visited
   lstVertices[0]->visited = true;

   //display the vertex
   displayVertex(0);   

   //insert vertex index in queue
   insert(0);
   int unvisitedVertex;

   while(!isQueueEmpty()) {
      //get the unvisited vertex of vertex which is at front of the queue
      int tempVertex = removeData();   

      //no adjacent vertex found
      while((unvisitedVertex = getAdjUnvisitedVertex(tempVertex)) != -1) {    
         lstVertices[unvisitedVertex]->visited = true;
         if(displayVertex(unvisitedVertex) == node)
		 	displayVertex(node);
         insert(unvisitedVertex);               
      }
		
   }   

   //queue is empty, search is complete, reset the visited flag        
   for(i = 0;i<vertexCount;i++) {
      lstVertices[i]->visited = false;
   }    
}
int main() {
   int i, j;

   for(i = 0; i<MAX; i++){ // set adjacency {
      for(j = 0; j<MAX; j++) // matrix to 0
         adjMatrix[i][j] = 0;
   }

   addVertex('A');   // 0
   addVertex('B');   // 1
   addVertex('C');   // 2
   addVertex('D');   // 3
   addVertex('E');   // 4
   addVertex('F');   // 5
   addVertex('G');   // 6
   addVertex('H');   // 7
   addVertex('I');   // 8
   addVertex('J');   // 9
   addVertex('K');   // 10
   addVertex('L');   // 11
 
   addEdge(0, 1);
   addEdge(0, 2);
   addEdge(0, 3);
   addEdge(1, 4);
   addEdge(1, 5);
   addEdge(3, 6);
   addEdge(3, 7);
   addEdge(4, 8);
   addEdge(4, 9);
   addEdge(6, 10);
   addEdge(6, 11);

   printf("\nBreadth First Search: ");
   
   breadthFirstSearch(8);

   return 0;
}

