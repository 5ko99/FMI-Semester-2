#include "Cylinder.h"
#include "SquarePyramid.h"
Cylinder::Cylinder(float r,float h){
    this->r=r;
    this->h=h;
}
float Cylinder::getH(){
    return this->h;
}
float Cylinder::getR(){
    return this->r;
}
bool Cylinder::isHigher(const SquarePyramid& sp){
    if(this->h>sp.h) return true;
}
ostream& operator<<(ostream& os,Cylinder& c){
    os<<c.h<<" "<<c.r;
    return os;
}
istream& operator>>(istream& is, Cylinder& c){
    is>>c.h>>c.r;
    return is;
}
