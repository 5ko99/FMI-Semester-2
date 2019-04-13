#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
    char* str;
    short len;
    cout<<"len:";
    cin>>len;
    str=new char[len+1];
    fstream file;
    file.open("strings.txt",ios::app);
    cout<<"Enter string:";
    cin.ignore();
    cin.getline(str,len);
    cout<<str<<endl;
    file<<str<<";";
    file.close();
    file.open("strings.txt",ios::in);
    while(!file.eof()){
        file.getline(str,len,';');
        cout<<str<<endl;
    }
    file.close();
    delete[] str;
    return 0;
}
