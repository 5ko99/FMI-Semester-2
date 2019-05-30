//
// Created by petko on 30/05/19.
//

#include "Medicine.h"
void Medicine::copyMedicine(char* name, bool recipy, float price) {
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->recipy=recipy;
    this->price=price;
}
void Medicine::deleteMedicine() {
    delete[] name;
}
Medicine::Medicine(char* name, bool r, float price) {
    copyMedicine(name,r,price);
}
Medicine::Medicine(const Medicine& m) {
    copyMedicine(m.name,m.recipy,m.price);
}
Medicine::~Medicine() {
    deleteMedicine();
}
Medicine& Medicine::operator=(const Medicine& m) {
    if(this!= &m){
        deleteMedicine();
        copyMedicine(m.name,m.recipy,m.price);
    }
    return *this;
}
void Medicine::printMedicine() {
    cout<<name<<" "<<recipy<<" "<<price<<" ";
}