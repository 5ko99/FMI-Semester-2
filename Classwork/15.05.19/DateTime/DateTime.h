//
// Created by petko on 15/05/19.
//

#ifndef DATETIME_DATETIME_H
#define DATETIME_DATETIME_H
#include "Date.h"
#include "Time.h"
#include <cstring>
using namespace std;

class DateTime: public Date, public Time {
    char dt[50];
    void itoa(short,char*);
public:
    DateTime(short=1, short=1, short=2019,short=0,short=0,short=0);
    void getDt() const;
};


#endif //DATETIME_DATETIME_H
