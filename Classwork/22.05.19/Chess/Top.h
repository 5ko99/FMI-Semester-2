//
// Created by petko on 22/05/19.
//

#ifndef CHESS_TOP_H
#define CHESS_TOP_H

#include "figura.h"
template <typename T>
class Top: public figura<T> {
public:
    Top(char* =nullptr,T=T(),int=0,int=0);
    void print();
};

template <typename T>
Top<T>::Top(char * name, T info, int x, int y):figura<T>(name,info,x,y) {

}
template <typename T>
void Top<T>::print(){
    cout<<this->x<<" "<<this->y+1<<endl;
    cout<<this->x-1<<" "<<this->y+1<<endl;
    cout<<this->x+1<<" "<<this->y+1<<endl;
}

#endif //CHESS_TOP_H
