#include <iostream>
#include "GroupTicket.h"
#include "SingleTicket.h"
#include "TicketFunction.h"
using namespace std;
int main() {
    int len =4;
    Ticket* arr[len];
    SingleTicket s1("Harry Potter",10,"1",5,6);
    SingleTicket s2("The Matrix",15,"05",9,9);
    int rows1[]={1,2,5,6,8};
    int cols1[]={4,3,7,2,3};
    int rows2[]={25,4,3,6,6};
    int cols2[]={25,9,4,8,4};
    GroupTicket g1("The Matrix",15,"2",rows1,cols1,5);
    GroupTicket g2("Harry Potter",10,"007",rows2,cols2,5);
    arr[0]= &s1;
    arr[1]= &g1;
    arr[2]= &s2;
    arr[3]= &g2;
    ticketsInfo(arr,len);
    //0-Single Ticket 1-Group Ticket
    for(int i=0;i<len;i++){
        printf("Type of ticket:%i for %s \n",arr[i]->getType(),arr[i]->getName());
    }
    return 0;
}