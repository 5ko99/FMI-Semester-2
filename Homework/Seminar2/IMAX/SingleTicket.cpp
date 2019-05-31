//
// Created by petko on 31/05/19.
//

#include "SingleTicket.h"
SingleTicket::SingleTicket(const char* name, float price, const char id[11],int x, int y):Ticket(name,price,id) {
    row=x;
    col=y;
}
SingleTicket::SingleTicket(const SingleTicket& s):Ticket(s) {
    row=s.row;
    col=s.col;
}
SingleTicket& SingleTicket::operator=(const SingleTicket& s) {
    if(this!=&s){
        Ticket::operator=(s);
        row=s.row;
        col=s.col;
    }
    return *this;
}
SingleTicket::~SingleTicket()=default;
const bool SingleTicket::getType() {
    return 0;
}
const int SingleTicket::getLen() {
    return 1;
}