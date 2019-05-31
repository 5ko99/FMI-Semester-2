//
// Created by petko on 31/05/19.
//

#ifndef IMAX_SINGLETICKET_H
#define IMAX_SINGLETICKET_H
#include "Ticket.h"

class SingleTicket: public Ticket {
    int row;
    int col;
public:
    SingleTicket(const char* =nullptr,float=0,const char[11]= nullptr,int=0,int=0);
    SingleTicket(const SingleTicket&);
    SingleTicket& operator=(const SingleTicket&);
    ~SingleTicket();
    const bool getType();
    const int getLen();
};


#endif //IMAX_SINGLETICKET_H
