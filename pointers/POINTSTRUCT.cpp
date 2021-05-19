#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct rectangle{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r={10,20};
    struct rectangle *p=&r;
    
    r.length = 15;
    (*p).length = 20;
    p->length = 25;
    
    printf("%d",*p);
    
}
