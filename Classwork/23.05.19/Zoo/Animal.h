//
// Created by petko on 23/05/19.
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H
#include <cstring>

class Animal {
protected:
    char* name;
    int age;
    int hungry;
private:
    void copyAnimal(char* =nullptr ,int=0,int=0);
    void deleteAnimal();
public:
    virtual void sound()=0;
    virtual void feed(int)=0;
    virtual void printMe()=0;
    Animal(char*,int,int);
    Animal(const Animal&);
    Animal& operator=(const Animal&);
    virtual ~Animal();

};


#endif //ZOO_ANIMAL_H
