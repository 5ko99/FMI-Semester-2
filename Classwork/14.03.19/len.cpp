#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file;
    char ch;
    int rows=-1;
    int n=0;
    int m=0;
    file.open("file.txt");
    while(!file.eof()){
        file.get(ch);
        if(ch=='\n'){
            if(n>m) m=n;
            n=0;
        }else n++;
    }
    cout<<m<<endl;
    file.close();
    return 0;
}
