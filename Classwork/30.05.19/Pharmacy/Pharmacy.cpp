//
// Created by petko on 30/05/19.
//

#include "Pharmacy.h"
Pharmacy::Pharmacy(int len) {
    this->m=new Medicine*[len];
    this->len=len;
}
Pharmacy::Pharmacy(const Pharmacy & p) {
    this->m=new Medicine*[p.len];
    this->len=p.len;
    for(int i=0;i<p.len;i++){
        this->m[i]= p.m[i];
    }
}
Pharmacy::~Pharmacy() {
    for(int i=0;i<len;i++){
        delete[] m[i];
    }
    delete[] m;
}
 Pharmacy& Pharmacy::operator=(const Pharmacy & p) {
    if(this!= &p){
        for(int i=0;i<len;i++){
            delete[] m[i];
        }
        delete[] m;
        this->m=new Medicine*[p.len];
        this->len=p.len;
        for(int i=0;i<p.len;i++){
            this->m[i]= p.m[i];
        }
    }
    return *this;
}
void Pharmacy::resize() {
    Pharmacy* temp =new Pharmacy(len+1);
    for(int i=0;i<len;i++){
        temp->m[i]=m[i];
    }
    for(int i=0;i<len;i++){
        delete[] m[i];
    }
    delete[] m;
    this->m=temp->m;
    this->len=temp->len;

}

void Pharmacy::addMedicine(Medicine & med) {
    //resize();
    if(m[0]!= nullptr){
        this->m[0]= &med;
    }else{
        m[1]=&med;
    }

    len++;
}
