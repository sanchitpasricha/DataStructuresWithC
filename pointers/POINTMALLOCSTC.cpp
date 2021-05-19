/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct rectangle{
    int length;
    int breadth;
};

int main()
{
    struct rectangle *p;
    
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 25;
    
    printf("%d",*p);
    
}
