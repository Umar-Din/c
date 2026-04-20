
#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

Rectangle* createStructInHeap(){
    return new Rectangle;
}

Rectangle crateStructInStack(){
    Rectangle r;
    return r;
}

int areaUsingStructPointer(Rectangle *r){
    return r->length * r->breadth;
}
int areaUsingStruct(Rectangle r){
    return r.length * r.breadth;
}

void callByRefrance(Rectangle &r){
    r.length = 100;
}

int main(){

    printf("Creating struct Rectanglee in heap\n");
    Rectangle* hp = createStructInHeap();
    hp->length = 10;hp->breadth=2;
    printf("calculated area => %d\n",areaUsingStructPointer(hp));
    printf("Creating struct Reactangle in stack\n");
    Rectangle sr = crateStructInStack();
    sr.length=10;sr.breadth=3;
    callByRefrance(sr);
    printf("calculated aread => %d\n",areaUsingStruct(sr));
    return 0;
}