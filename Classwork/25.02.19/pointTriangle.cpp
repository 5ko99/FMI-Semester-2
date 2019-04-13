#include<iostream>
#include<cmath>
using namespace std;
struct Point{
    double x;
    double y;
};
struct Triangle{
    Point A;
    Point B;
    Point C;
};
void initPoint(Point* p){
    cin>>(*p).x>>(*p).y;
}
void printPoint(Point p){
    cout<<"x="<<p.x<<" y="<<p.y<<endl;
}
double pointsLen(Point U, Point Z){
    double result = sqrt((U.x-Z.x)*(U.x-Z.x)+(U.y-Z.y)*(U.y-Z.y));
    return result;
}
void initTriangle(Triangle* t){
    initPoint(&((*t).A));
    initPoint(&((*t).B));
    initPoint(&((*t).C));
}
void printTriangle(Triangle t){
    printPoint(t.A);
    printPoint(t.B);
    printPoint(t.C);
}
double pTriangle(Triangle t){
    double p;
    double a,b,c;
    a=pointsLen(t.B,t.C);
    b=pointsLen(t.A,t.C);
    c=pointsLen(t.A,t.B);
    p=a+b+c;
    return p;
}
double sTriangle(Triangle t){
    double s,p;
    double a,b,c;
    a=pointsLen(t.B,t.C);
    b=pointsLen(t.A,t.C);
    c=pointsLen(t.A,t.B);
    p=pTriangle(t)/2.0;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
int main(){
    Triangle t;
    initTriangle(&(t));
    printTriangle(t);
    cout<<pTriangle(t)<<" "<<sTriangle(t);
}
