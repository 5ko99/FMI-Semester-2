#include<iostream>;
#include<cmath>;
using namespace std;
struct Triangle{
    double a;
    double b;
    double c;
};
void initTriangle(Triangle* t){
    cin>>(*t).a>>(*t).b>>(*t).c;
}
void printTriangle(Triangle t){
    cout<<"a="<<t.a<<" b="<<t.b<<" c="<<t.c<<endl;
}
double pTriangle(Triangle t){
    double p;
    p=t.a+t.b+t.c;
    return p;
}
double sTriangle(Triangle t){
    double s,p;
    p=pTriangle(t)/2.0;
    s=sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
    return s;
}
int main(){
    Triangle t;
    initTriangle(&(t));
    printTriangle(t);
    cout<<pTriangle(t)<<" "<<sTriangle(t);
}
