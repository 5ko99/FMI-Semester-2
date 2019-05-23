#include <iostream>
#include "Peshka.h"
#include "Top.h"
int main() {
    int n,type,x,y;
    char* name;
    cin>>n;
    figura<int>** arr=new figura<int>*[n];
    for(int i=0;i<n;i++){
        cin>>type;
        cin>>name>>x>>y;
        if(type==1) arr[i]=new Peshka<int>(name,0,x,y);
        else arr[i]=new Top<int>(name,0,x,y);
    }
    for(int i=0;i<n;i++){
        arr[i]->print();
    }
    for(int i=0;i<n;i++){
        delete arr[i];
    }
    delete[] arr;
    return 0;
}