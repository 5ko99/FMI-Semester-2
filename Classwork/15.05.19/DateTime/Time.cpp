//
// Created by petko on 15/05/19.
//

#include "Time.h"
Time::Time(short sec, short min, short hours) {
    this->sec=sec;
    this->min=min;
    this->hours=hours;
}
short Time::toSec() {
    short sec;
    sec+=this->sec;
    sec+=this->min*60;
    sec+=this->hours*60*60;
    return  sec;
}