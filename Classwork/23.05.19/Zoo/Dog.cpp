//
// Created by petko on 23/05/19.
//

#include "Dog.h"
void Dog::copyDog(int p){
    poroda=new int(p);
}
void Dog::deleteDog() {
    delete this->poroda;
}
Dog::Dog(char* name, int age, int hungry, int poroda):Animal(name,age,hungry) {
    copyDog(poroda);
}
Dog::Dog(Dog& dog):Animal(dog) {
    copyDog(*dog.poroda);
}
Dog& Dog::operator=(Dog& dog) {
    if(this!=&dog){
        Animal::operator=(dog);
        deleteDog();
        copyDog(*dog.poroda);
    }
    return *this;
}
Dog::~Dog() {
    deleteDog();
}
void Dog::sound() {
    cout<<"Bau"<<endl;
}
void Dog::printMe() {
    cout<<this->name<<' '<<this->age<<' '<<this->hungry<<' '<<*poroda<<endl;
}
void Dog::feed(int n){
    (hungry) = hungry-n;
}