#include <iostream>
#include <cmath>
using namespace std;
class Triangle{
    protected:
    float a,b,c;
    public:
    void initialise(float ,float , float );
    float perimeter();
    float area();
    friend ostream& operator<<(ostream&,const Triangle&);
    Triangle operator++(int);
    Triangle& operator++();
};
//opeator++
Triangle Triangle::operator++(int dummy){
    Triangle t =*this;
    a++;b++;c++;
    return t;
}
Triangle& Triangle::operator++(){
    a++;b++;c++;
    return *this;
}
class RightTriangle: public Triangle{
    public:
    void initialise(float, float, float);
    float area();
};
class Ravnobedren:public Triangle{
    public:
     void initialise(float, float, float);
     float area();

};
void Triangle::initialise(float a, float b, float c){
    if(a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0){
        this->a=a;
        this->b=b;
        this->c=c;
    }else{
        cerr<<"Error";
    }
    
}
float Triangle::perimeter(){
    return a+b+c;
}
float Triangle::area(){
    float area;
    float p=this->perimeter()/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
}
ostream& operator<<(ostream& of,const Triangle& tr){
    of<<"a="<<tr.a<<" b="<<tr.b<<" c="<<tr.c<<endl;
    return of;
}

void RightTriangle::initialise(float a,float b, float c){
        if(a*a+b*b==c*c){
            Triangle::initialise(a,b,c);
        }
        if(a*a+c*c==b*b){
            Triangle::initialise(a,c,b);
        } 
        if(b*b+c*c==a*a){
            Triangle::initialise(b,c,a);
        }
}
float RightTriangle::area(){
    return (this->a*this->b)/2;
}
void Ravnobedren::initialise(float a, float b, float c){
    if(a==b){
        Triangle::initialise(a,b,c);
    }
    if(b==c){
        Triangle::initialise(b,c,a);
    }
    if(a==c){
        Triangle::initialise(a,c,b);
    }
}
float Ravnobedren::area(){
    float h=sqrt(a*a-(c/2)*(c/2));
    return (h*c)/2;
}

int main(){
    Ravnobedren tr;
    tr.initialise(3,3,5);
    cout<<tr;
    cout<<tr.area();
    return 0;
}