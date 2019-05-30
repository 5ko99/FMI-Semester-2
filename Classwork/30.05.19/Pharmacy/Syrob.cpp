//
// Created by petko on 30/05/19.
//

#include "Syrob.h"
Syrob::Syrob(char* name, bool r, float price, float ml):Medicine(name,r,price) {
    this->ml=ml;
}
Syrob::Syrob(const Syrob & s):Medicine(s) {
    this->ml=s.ml;
}
Syrob& Syrob::operator=(const Syrob & s) {
    if(this!= &s){
        Medicine::operator=(s);
        this->ml=ml;
    }
    return *this;
}
Syrob::~Syrob()=default;
void Syrob::printMedicine() {
    Medicine::printMedicine();
    cout<<ml<<"ml"<<endl;
}