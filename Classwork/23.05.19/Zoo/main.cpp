#include <iostream>
using  namespace std;
#include "Dog.h"
int main() {
    Animal** a=new Animal*[10];
    a[0]=new Dog("Pencho",10,5,2);
    a[0]->sound();
    a[0]->printMe();
    a[0]->feed(2);
    a[0]->printMe();
    return 0;
}