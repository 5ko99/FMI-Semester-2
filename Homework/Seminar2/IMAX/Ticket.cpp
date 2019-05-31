//
// Created by petko on 31/05/19.
//

#include "Ticket.h"
void Ticket::copyTicket(const char* name, float price, const char id[11]) {
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->price=price;
    strcpy(this->id,id);
}
void Ticket::deleteTicket() {
    delete[] name;
}
Ticket::Ticket(const char* name, float price, const char id[11]) {
    copyTicket(name,price,id);
}
Ticket::Ticket(const Ticket & t) {
    copyTicket(t.name,t.price,t.id);
}
Ticket& Ticket::operator=(const Ticket & t) {
    if(this!=&t){
        deleteTicket();
        copyTicket(t.name,t.price,t.id);
    }
    return *this;
}
Ticket::~Ticket() {
    deleteTicket();
}
const float Ticket::getPrice() {
    return price;
}
const char* Ticket::getName() {
    return name;
}
const char* Ticket::getID() {
    return id;
}