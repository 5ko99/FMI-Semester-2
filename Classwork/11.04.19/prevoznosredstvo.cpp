#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;
class Sredstvo{
protected:
    short type;
public:
    Sredstvo(short);
    Sredstvo& operator=(const Sredstvo&);
};
Sredstvo::Sredstvo(short t){
    type=t;
}
Sredstvo& Sredstvo::operator=(const Sredstvo& sr){
    this->type=sr.type;
    return *this;
}
class Car:public Sredstvo  {
protected:
    char* num;
    int year;
private:
    void delCar();
    void copyCar(char*,int);
public:
    Car(short ,char*, int);
    Car(const Car&);
    ~Car();
    Car& operator=(const Car&);
};
void Car::copyCar(char* num,int year){
            this->year=year;
            this->num=new char[strlen(num)+1];
            assert(this->num);
            strcpy(this->num,num);
}
void Car::delCar(){
    delete[] this->num;
}
Car::Car(short type,char* num,int year):Sredstvo(type){
    copyCar(num,year);
}
Car::Car(const Car& c):Sredstvo(c.type){
    copyCar(c.num,c.year);
}
Car& Car::operator=(const Car& c){
    if(this!=&c){
        delCar();
        Sredstvo::operator=(c);
        copyCar(c.num,c.year);
    }
    return *this;
}
Car::~Car(){
    delCar();
}

class Tesla:public Car{
    short doors;
    char* color;
    void delTesla();
    void copyTesla(short, char*);
public:
Tesla(short, char*,short, char*, int);
Tesla(const Tesla&);
Tesla& operator+(const Tesla&);
~Tesla();
};
void Tesla::copyTesla(short doors, char* color){
    this->doors=doors;
    this->color=new char[strlen(color)+1];
    assert(this->color);
    strcpy(this->color,color);
}
void Tesla::delTesla(){
    delete[] this->color;
}
Tesla::Tesla(short doors, char* color, short type, char* num, int year):Car(type,num,year){
    Tesla::copyTesla(doors,color);
}
Tesla::Tesla(const Tesla& t){
    Tesla::copyTesla(t.doors,t.color);
}
Tesla& Tesla::operator=(const Tesla& t){
    if(this!=&t){
        Car::operator=(t);
        Tesla::delTesla();
        Tesla::copyTesla(t.doors,t.color);
    }
    return *this;
}
Tesla::~Tesla(){
    Tesla::delTesla();
}


int main(){
    
    return 0;
}