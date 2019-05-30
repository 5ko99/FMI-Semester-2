//
// Created by petko on 29/05/19.
//

#include "A.h"
void A::copyFrom(int* arr,int len, int cap) {
    arrA=new int[cap];
    for (int i = 0; i <len ;i++) {
        arrA[i]=arr[i];
    }
}
void A::free() {
    delete[] arrA;
}
A::A(int* arr, int len, int cap){
    copyFrom(arr,len,cap);
}
A::A(A& a){
    copyFrom(a.arrA,a.lenA,a.capacityA);
}
A::~A(){
    free();
}
A& A::operator=(A& a) {
    if(this!=&a){
        free();
        copyFrom(a.arrA,a.lenA,a.capacityA);
    }
    return *this;
}
void A::add(int x){
    if(this->capacityA==0) capacityA=1;
    if(capacityA<=lenA){
        A temp=(*this);
        free();
        capacityA*=2;
        copyFrom(temp.arrA,temp.lenA,capacityA);
    }
    arrA[lenA]=x;
    lenA++;
}