//
// Created by petko on 29/05/19.
//

#ifndef DIAMOND_A_H
#define DIAMOND_A_H


class A {
protected:
    int *arrA;
    int lenA;
    int capacityA;
    A(int*,int,int);
    A(A&);
    ~A();
    A& operator=(A&);
    void add(int);
private:
    void copyFrom(int* =nullptr,int=0,int=0);
    void free();
};


#endif //DIAMOND_A_H
