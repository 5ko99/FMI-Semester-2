//
// Created by petko on 31/05/19.
//

#include "GroupTicket.h"
void GroupTicket::copyGroupTicket(const int* row, const int* col, int len) {
    this->row=new int[len];
    this->col=new int[len];
    for(int i=0;i<len;i++){
        this->row[i]=row[i];
        this->col[i]=col[i];
    }
    this->len=len;
}
void GroupTicket::deleteGroupTicket(){
    delete[] row;
    delete[] col;
}
GroupTicket::GroupTicket(const char* name, float price, const char* id,
        const int* row, const int* col, int len):Ticket(name,(price/4)*len,id) {
    if(len<4){
        cerr<<"Len must be at least 4!"<<endl;
        return;
    }
    copyGroupTicket(row,col,len);
}
GroupTicket::GroupTicket(const GroupTicket& gt):Ticket(gt) {
    copyGroupTicket(gt.row,gt.col,gt.len);
}
GroupTicket& GroupTicket::operator=(const GroupTicket& gt) {
    if(this!=&gt){
        Ticket::operator=(gt);
        deleteGroupTicket();
        copyGroupTicket(gt.row,gt.col,gt.len);
    }
    return *this;
}
GroupTicket::~GroupTicket() {
    deleteGroupTicket();
}
const bool GroupTicket::getType() {
    return 1;
}
const int GroupTicket::getLen() {
    return len;
}