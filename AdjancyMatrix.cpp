#include <iostream>
#define MAX 6
using namespace std;

struct Vertex {
   char label;
   bool visited;
};
//array of vertices
struct Vertex* lstVertices[MAX];

//adjacency matrix
char adjMatrix[MAX][MAX];

//vertex count
int vertexCount = 0;

//add vertex to the vertex list
void addVertex(char label) {
  Vertex *vertex = new Vertex;
   vertex->label = label;  
   vertex->visited = false;     
   lstVertices[vertexCount++] = vertex;
}

//add edge to edge array
void addEdge(int start,int end) {
   adjMatrix[start][end] = 'T';
   adjMatrix[end][start] = 'T';
}
int main() {
   int i, j;

   for(i = 0; i<MAX; i++){ // set adjacency {
      for(j = 0; j<MAX; j++) // matrix to 0
         adjMatrix[i][j] = 'F';
   }

   addVertex('0');   // 0
   addVertex('1');   // 1
   addVertex('2');   // 2
   addVertex('3');   // 3
   addVertex('4');   // 4
   addVertex('5');   // 5
 
   addEdge(0, 1);
   addEdge(0, 3);
   addEdge(0, 5);
   addEdge(1, 2);
   addEdge(1, 3);
   addEdge(1, 4);
   addEdge(1, 5);
   addEdge(2, 3);
   addEdge(3, 4);
   
   for(i = 0; i<MAX; i++){ // set adjacency {
      for(j = 0; j<MAX; j++) // matrix to 0
         cout<<adjMatrix[i][j]<<"\t";
	cout<<endl;
   }
   return 0;
}

