//
// Created by petko on 23/05/19.
//

#ifndef ZOO_DOG_H
#define ZOO_DOG_H

#include "Animal.h"
#include <iostream>
using namespace std;
class Dog: public Animal {
    int* poroda;
    void copyDog(int);
    void deleteDog();
public:
    Dog(char* =nullptr,int=0,int=0,int=0);
    Dog(Dog&);
    ~Dog();
    Dog& operator=(Dog&);
    void sound();
    void printMe();
    void feed(int);
};


#endif //ZOO_DOG_H
