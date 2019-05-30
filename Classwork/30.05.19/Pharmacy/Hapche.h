//
// Created by petko on 30/05/19.
//

#ifndef PHARMACY_HAPCHE_H
#define PHARMACY_HAPCHE_H

#include "Medicine.h"

class Hapche: public Medicine {
    float d;
public:
    Hapche(char* =nullptr,bool=0,float=0,float=0);
    Hapche(const Hapche&);
    ~Hapche();
    Hapche& operator=(const Hapche&);
    void printMedicine();
};


#endif //PHARMACY_HAPCHE_H
