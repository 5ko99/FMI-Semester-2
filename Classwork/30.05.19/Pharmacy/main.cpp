#include <iostream>
using  namespace std;

#include "Pharmacy.h"
#include "Hapche.h"
#include "Syrob.h"

int main() {
    Hapche hap("Paracetamol",0,1.50,5);
    Syrob s("Prospan",1,10,50);
    Pharmacy ph(5);
    ph.addMedicine(hap);
    ph.addMedicine(s);
    ph.m[0]->printMedicine();
    ph.m[1]->printMedicine();
    return 0;
}