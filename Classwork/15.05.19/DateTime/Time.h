//
// Created by petko on 15/05/19.
//

#ifndef DATETIME_TIME_H
#define DATETIME_TIME_H


class Time {
protected:
    short sec;
    short min;
    short hours;
public:
    Time(short=0, short=0, short=0);
    short toSec();
};


#endif //DATETIME_TIME_H
