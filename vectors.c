
#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x=x;
 v.y=y;
 v.z=z;
 v.length=sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
vector vector_add(vector a, vector b) {
    //Ask if you can just use vector_init since the function already returns a vector. Or return vector_init;
    vector v;
    v.x = a.x+b.x;
    v.y = a.y+b.y;
    v.z = a.z+b.z;
    v.length=sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z));
    return v;
}

//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is)
float vector_dot(vector a, vector b){
   float v = ((a.x*b.x)+(a.y*b.y)+(a.z*b.z));
   return v;
}

//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z components by its length. Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
int vector_normalize(vector *a) {
   //When using pointers (*) the arrows calls the object's thingys (ex: length, x value, y value, etc.) 
   if(a -> length == 0){
      printf("The Vector was not normalized since the length is 0\n");
      return 1;   
   } else {
   a -> x = (a -> x / a -> length);
   a -> y = (a -> y / a -> length);
   a -> z = (a -> z / a -> length);
   a -> length = 1;
   }
   return 0;
}

//write vector_print function that prints out the x,y,z and length of a vector on separate lines
void vector_print(vector c) {
   printf("The vector's x value is:%f\nThe y value is:%f\nThe z value is:%f\nThe length is:%f\n", c.x, c.y, c.z, c.length);
}