//
// Created by petko on 22/05/19.
//

#ifndef CHESS_PESHKA_H
#define CHESS_PESHKA_H

#include "figura.h"

template <typename T>
class Peshka:public figura<T> {
public:
    Peshka(char* name= nullptr,T=T(), int x=0, int y=0);
    void print();
};

template <typename T>
Peshka<T>::Peshka(char *name, T info, int x, int y):figura<T>(name,info,x,y) {
}
template <typename T>
void Peshka<T>::print(){
    cout<<this->x<<" "<<this->y+1<<endl;
    cout<<this->x-1<<" "<<this->y+1<<endl;
    cout<<this->x+1<<" "<<this->y+1<<endl;
}


#endif //CHESS_PESHKA_H
