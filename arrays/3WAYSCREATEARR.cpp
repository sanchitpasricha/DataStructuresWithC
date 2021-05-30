#include <stdio.h>
#include <stdlib.h>
int main()
{
 int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}}; // everything is in stack.
 
 int *B[3];
 int **C;
 int i,j;
 
 
 B[0]=(int *)malloc(4*sizeof(int));  //array[3] of pointers are in stack  
 B[1]=(int *)malloc(4*sizeof(int));  //rest 4 columns array are in heap.
 B[2]=(int *)malloc(4*sizeof(int));
 
 
 C=(int **)malloc(3*sizeof(int *));  //everything is in heap leaving **C for call 
 C[0]=(int *)malloc(4*sizeof(int));
 C[1]=(int *)malloc(4*sizeof(int));
 C[2]=(int *)malloc(4*sizeof(int));
 
 
 for(i=0;i<3;i++)
 {
 for(j=0;j<4;j++)
 printf("%d ",C[i][j]);
 printf("\n");
 }
 return 0;
}

//OUTPUT
/*
0 0 0 0 

0 0 0 0 

0 0 0 0 
*/


