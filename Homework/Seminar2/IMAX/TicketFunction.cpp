//
// Created by petko on 31/05/19.
//

#include "TicketFunction.h"
void ticketsInfo(Ticket** arr, int len){
    float sum=0;
    int audience=0;
    for(int i=0;i<len;i++){
        sum+= arr[i]->getPrice();
        audience+=arr[i]->getLen();
    }
    printf("The Audience was:%i \nTotal sum of all Tickets:%.2f lv. \n  ",audience,sum);
}