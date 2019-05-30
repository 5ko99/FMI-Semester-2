//
// Created by petko on 30/05/19.
//

#ifndef PHARMACY_MEDICINE_H
#define PHARMACY_MEDICINE_H

#include<cstring>
#include<iostream>
using namespace std;
class  Medicine {
protected:
    char* name;
    bool recipy;
    float price;
    void copyMedicine(char*,bool,float);
    void deleteMedicine();
public:
    virtual void  printMedicine();
    Medicine(char* =nullptr,bool=0,float=0);
    virtual  ~Medicine();
    Medicine(const Medicine&);
    Medicine& operator=(const Medicine&);
};



#endif //PHARMACY_MEDICINE_H
