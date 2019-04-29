#ifndef SQUAREPYRAMID_H_INCLUDED
#define SQUAREPYRAMID_H_INCLUDED
#include "cylinder.h"
class SquarePyramid{
    float a;
    float h;
public:
    SquarePyramid(float, float);
    float getH();
    float getA();
    friend bool Cylinder::isHigher(const SquarePyramid&);
    friend ostream& operator<<(ostream&,SquarePyramid&);
    friend istream& operator>>(istream&,SquarePyramid&);
};

#endif // SQUAREPYRAMID_H_INCLUDED
