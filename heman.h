//heman header file
#include "structure.h"
  struct vector sub(struct vector a,struct vector b)
 {    
 	struct vector c={a.i-b.i,a.j-b.j,a.k-b.k};
 	return c;
 }
 struct vector sum(struct vector a,struct vector b)
 {    
 	struct vector c={a.i+b.i,a.j+b.j,a.k+b.k};
 	return c;
 }

int dotproduct(struct vector a,struct vector b)
{
     return ((a.i)*(b.i)+(a.j)*(b.j)+(a.k)*(b.k));
}

void print(struct vector a)
{
	printf("\n%di + %dj + %dk",a.i,a.j,a.k);
}