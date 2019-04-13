#include<iostream>;
using namespace std;
struct Rectangle{
    double width;
    double height;
};
void printRec(Rectangle r){
    cout<<"Width:"<<r.width<<endl;
    cout<<"Height:"<<r.height<<endl;
}
void initRec(Rectangle* r){
    cin>>(*r).width;
    cin>>(*r).height;
}
Rectangle initRec(){
    Rectangle r;
    cin>>r.width;
    cin>>r.height;
    return r;
}
int main(){
    Rectangle r;
    initRec(&(r));
    printRec(r);
    r=initRec();
    printRec(r);
    return 0;
}
