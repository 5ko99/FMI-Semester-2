#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED
#include <iostream>
using namespace std;
class SquarePyramid;
class Cylinder{
        float r;
        float h;
public:
    bool isHigher(const SquarePyramid&);
    Cylinder(float,float);
    float getH();
    float getR();
    friend ostream& operator<<(ostream&,const Cylinder&);
    friend istream& operator>>(istream&,const Cylinder&);
};


#endif // CYLINDER_H_INCLUDED
