#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    fstream file;
    char str[100];
    file.open("names.txt",ios::out);
    while(1){
       cin.getline(str,100);
       if(!strcmp(str,"stop")){
            break;
       }
       file<<str<<endl;
    }
    file.close();
    return 0;
}
