#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    fstream file;
    int i=0;
    file.open("space.txt",ios::in);
    int n = file.tellg();
    char* str=new char[1024];
    while(!file.eof()){
        file>>str[i];
        i++;
    }
    str[i+1]='\0';
    file.close();
    cout<<str;
    file.open("space.txt",ios::out);
    file<<str;
    file.close();
    return 0;
}
