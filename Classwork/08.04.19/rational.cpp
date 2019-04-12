#include <iostream>
using namespace std;
class Rational{
    int num;
    int denum;
    public:
    operator double (); 
    Rational operator+(const Rational& );
    Rational operator*(const Rational&);
};
Rational::operator double(){
    return (double) num/denum;
}
Rational Rational::operator+(const Rational& r1){
    Rational r2;
    r2.denum=this->denum*r1.denum;
    r2.num=(this->num*r1.denum)+(r1.num*this->denum);
    return r2;
}
Rational Rational::operator*(const Rational& r1){
    Rational r2;
    r2.num=this->num+r1.num;
    r2.denum=this->denum*r1.denum;
    return r2;
}
int main(){

}