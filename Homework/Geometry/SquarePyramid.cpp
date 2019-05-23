#include "SquarePyramid.h"
SquarePyramid::SquarePyramid(float a, float h){
    this->a=a;
    this->h=h;
}
float SquarePyramid::getA(){
    return this->a;
}
float SquarePyramid::getH(){
    return this->h;
}
ostream& operator<<(ostream& os,SquarePyramid& sp){
    os<<sp.a<<" "<<sp.h;
    return os;
}
istream& operator>>(istream& is, SquarePyramid& sp){
    is>>sp.a>>sp.h;
    return is;
}
