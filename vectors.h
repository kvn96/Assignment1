
//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
#include <stdio.h>
#include <math.h>
//Not sure about float.h since math.h is in here
#include <stdlib.h>

typedef struct {
 //enter definition for float fields for x,y,z,length
 float x;
 float y;
 float z;
 float length;
} vector;

//When doing h files you need to do the header, its just a copy and paste of the top of each function.
//Stupid isn't it?
vector vector_init(float x, float y, float z);
vector vector_add(vector a, vector b);
float vector_dot(vector a, vector b);
void vector_print(vector c);
int vector_normalize(vector *a);