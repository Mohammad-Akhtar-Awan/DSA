#include <iostream>
using namespace std;
class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box
//Constructor
Box(void){
	length = 0;
	breadth = 0;
	height = 0;
}  
// Member functions definitions
void getVolume(void) {
   cout<<"Volume : "<< length * breadth * height;
}
void setLength( double len ) {
   length = len;
}
void setBreadth( double bre ) {
   breadth = bre;
}
void setHeight( double hei ) {
   height = hei;
}
};
// Main function for the program
int main() {
   //Box Box1;                // Declare Box1 of type Box
   //Box Box2;                // Declare Box2 of type Box
   //double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
  /* Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;*/
   
   Box b;
   b.setLength(10);
   b.setBreadth(20);
   b.setHeight(30);
   b.getVolume();
   //cout<<"Volume of b : "<<b.getVolume();
   return 0;
}

