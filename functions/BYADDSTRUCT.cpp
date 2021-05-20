#include <iostream>

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    
    p->length=20;
    printf("Length %d Breadth %d",p->length,p->breadth);
    
}


int main(){
    
    struct Rectangle r={10,5};
    fun(&r);
    
    printf("\nLength %d Breadth %d ",r.length,r.breadth);
}