#include <iostream>

struct Rectangle{
    int length;
    int breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    
    p->length=20;
    p->breadth=30;
    
    return p;
}

int main(){
    
    struct Rectangle *poi = fun();
    
    printf("Length %d Breadth %d ",poi->length,poi->breadth);
}