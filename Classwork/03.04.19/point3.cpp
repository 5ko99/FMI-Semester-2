#include <iostream>
using namespace std;
class point3{
    double x,y,z;
    public:
    point3(double =0,double =0,double =0);
    point3(point3 const &);
    point3& operator=(const point3&);
    ~point3();
    int getX() const;
    int getY() const;
    int getZ() const;
    void setX(int x);
    void setY(int y);
    void setZ(int z);
};
point3::point3(double x,double y,double z){
    this->x=x;
    this->y=y;
    this->z=z;
}
point3::point3(const point3 &p){
    x=p.x;
    y=p.y;
    z=p.z;
}
point3& point3::operator=(point3 const &p){
    if(this!=&p){
        this->x=p.x;
        this->y=p.y;
        this->z=p.z;
    }
    return *this;   
}
point3::~point3(){
    cout<<"Deconstructed"<<endl;
}
int point3::getX() const{
    return this->x;
}
int point3::getY() const{
    return this->y;
}
int point3::getZ() const{
    return this->z;
}
void point3::setX(int x){
    this->x=x;
}
void point3::setY(int y){
    this->y=y;
}
void point3::setZ(int z){
    this->z=z;
}

int main(){
    point3 p3=point3(1,2,3);
    cout<<p3.getX()<<endl;
    point3 p(p3);
    cout<<p.getY()<<endl;
    p.setY(4);
    p3=p;
    cout<<p3.getY()<<endl;
    return 0;
}