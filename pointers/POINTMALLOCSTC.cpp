
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
