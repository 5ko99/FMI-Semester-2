//
// Created by petko on 30/05/19.
//

#include "Hapche.h"
Hapche::Hapche(char* name, bool r, float price, float d):Medicine(name,r,price) {
    this->d=d;
}
Hapche::Hapche(const Hapche& h):Medicine(h) {
    this->d=h.d;
}
Hapche& Hapche::operator=(const Hapche & h) {
    if(this!= &h){
        Medicine::operator=(h);
        this->d=h.d;
    }
    return *this;
}
Hapche::~Hapche()=default;
void Hapche::printMedicine() {
    Medicine::printMedicine();
    cout<<d<<"cm."<<endl;
}