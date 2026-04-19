
#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle* createStructInHeap(){
    return (struct Rectangle*)malloc(sizeof(struct Rectangle));
}

struct Rectangle crateStructInStack(){
    struct Rectangle r;
    return r;
}

int areaUsingStructPointer(struct Rectangle *r){
    return r->length * r->breadth;
}
int areaUsingStruct(struct Rectangle r){
    return r.length * r.breadth;
}
int main(){

    printf("Creating struct Rectanglee in heap\n");
    struct Rectangle* hp = createStructInHeap();
    hp->length = 10;hp->breadth=2;
    printf("calculated area => %d\n",areaUsingStructPointer(hp));
    printf("Creating struct Reactangle in stack\n");
    struct Rectangle sr = crateStructInStack();
    sr.length=10;sr.breadth=3;
    printf("calculated aread => %d\n",areaUsingStruct(sr));
    return 0;
}