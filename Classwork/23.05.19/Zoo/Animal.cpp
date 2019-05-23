//
// Created by petko on 23/05/19.
//

#include "Animal.h"
void Animal::copyAnimal(char* name,int age, int hungry) {
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->age=age;
    this->hungry=hungry;
}
void Animal::deleteAnimal() {
    delete[] this->name;
}
Animal::Animal(char* name, int age, int hungry) {
    copyAnimal(name,age,hungry);
}
Animal::Animal(const Animal& animal) {
    copyAnimal(animal.name,animal.age,animal.hungry);
}
Animal& Animal::operator=(const Animal& animal) {
    if(this!=&animal){
        deleteAnimal();
        copyAnimal(animal.name,animal.age,animal.hungry);
    }
    return *this;
}
Animal::~Animal() {
    deleteAnimal();
}