//
// Created by petko on 30/05/19.
//

#ifndef PHARMACY_SYROB_H
#define PHARMACY_SYROB_H

#include "Medicine.h"

class Syrob: public Medicine {
    float ml;
public:
    Syrob(char* =nullptr,bool=0,float=0,float=0);
    Syrob(const Syrob&);
    ~Syrob();
    Syrob& operator=(const Syrob&);
    void printMedicine();
};


#endif //PHARMACY_SYROB_H
