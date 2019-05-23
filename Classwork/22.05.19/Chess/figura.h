//
// Created by petko on 22/05/19.
//

#ifndef CHESS_FIGURA_H
#define CHESS_FIGURA_H
#include <cstring>
#include <iostream>
using namespace std;
template <typename T>
class figura {
protected:
    char* name;
    T playerInfo;
    int x,y;
public:
    virtual void print()=0;
    figura(char* = nullptr,T=T(),int=0,int=0);
    figura(const figura&);
    figura<T>& operator=(const figura&);
    virtual ~figura();

};
template <typename T>
figura<T>::figura(char* name,T info, int x, int y){
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->playerInfo=info;
    x=x;
    y=y;
}
template <typename T>
figura<T>::figura(const figura& f){
    this->name=new char[strlen(f.name)+1];
    strcpy(this->name,f.name);
    this->playerInfo=f.playerInfo;
    this-x=f.x;
    this->y=f.y;
}
template <typename T>
figura<T>& figura<T>::operator=(const figura& f) {
    if(this!=&f){
        delete[] f.name;
        this->name=new char[strlen(f.name)+1];
        strcpy(this->name,f.name);
        this->playerInfo=f.playerInfo;
        this-x=f.x;
        this->y=f.y;
    }
    return *this;
}
template <typename T>
figura<T>::~figura() {
    delete[] this->name;
}

#endif //CHESS_FIGURA_H
