//
// Created by petko on 31/05/19.
//

#ifndef IMAX_GROUPTICKET_H
#define IMAX_GROUPTICKET_H

#include "Ticket.h"
#include<iostream>
using namespace std;
class GroupTicket: public Ticket {
    int* row;
    int* col;
    int len;
    void copyGroupTicket(const int*,const int*, int);
    void deleteGroupTicket();
public:
    GroupTicket(const char*,float,const char[11],const int*,const int*,int);
    GroupTicket(const GroupTicket&);
    GroupTicket& operator=(const GroupTicket&);
    ~GroupTicket();
    const bool getType();
    const int getLen();
};


#endif //IMAX_GROUPTICKET_H
