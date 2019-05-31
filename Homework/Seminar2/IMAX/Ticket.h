//
// Created by petko on 31/05/19.
//

#ifndef IMAX_TICKET_H
#define IMAX_TICKET_H

#include<cstring>

class Ticket {
protected:
    char* name;
    float price;
    char id[11];
    void copyTicket(const char*,float,const char[11]);
    void deleteTicket();
public:
    Ticket(const char* =nullptr,float=0,const char[11]= nullptr);
    Ticket(const Ticket&);
    virtual ~Ticket();
    Ticket& operator=(const Ticket&);
    const char* getName();
    const char* getID();
    const float getPrice();
    virtual const bool getType()=0;
    virtual const int getLen()=0;
};


#endif //IMAX_TICKET_H
