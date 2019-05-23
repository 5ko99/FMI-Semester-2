//
// Created by petko on 15/05/19.
//

#include "DateTime.h"
void DateTime::itoa(short n,char* str){
    int len=0,pow=1;
    while(pow<n){
        n*=10;
        len++;
    }
    pow/=10;
    len--;
    for(int i=0;i<len;i++){
        str[i]=(n/pow)%10+'0';
        pow/=10;
    }
    str[len]='\0';
}
DateTime::DateTime(short day, short month, short year, short hours, short min, short sec):Date(day,month,year),Time(hours,min,sec) {
    char temp[15];
    itoa(day,temp);
    strcpy(dt,temp);
    strcat(dt,"/");
    itoa(month,temp);
    strcpy(dt,temp);
    strcat(dt,"/");
    itoa(year,temp);
    strcpy(dt,temp);
    strcat(dt," ");
    itoa(hours,temp);
    strcpy(dt,temp);
    strcat(dt,":");
    itoa(min,dt);
    strcpy(dt,temp);
    strcat(dt,":");
    itoa(sec,dt);
    strcpy(dt,temp);
    strcat(dt,"\n");
}
void DateTime::getDt() const{

}