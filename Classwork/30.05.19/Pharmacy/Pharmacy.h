//
// Created by petko on 30/05/19.
//

#ifndef PHARMACY_PHARMACY_H
#define PHARMACY_PHARMACY_H

#include "Medicine.h"

class Pharmacy {
public:
    Medicine** m;
    int len;
    void resize();
    Pharmacy(int=0);
    Pharmacy(const Pharmacy&);
    ~Pharmacy();
    Pharmacy& operator=(const Pharmacy&);
    void addMedicine(Medicine&);
};


#endif //PHARMACY_PHARMACY_H
