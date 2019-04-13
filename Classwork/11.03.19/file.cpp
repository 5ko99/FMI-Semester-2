#include<iostream>
#include<fstream>
using namespace std;
int main(){
    unsigned int sum=0;
    unsigned int temp=0;
    fstream file;
    file.open("text.txt",ios::in);
    while(!file.eof()){
        file>>temp;
        file.get();
        sum+=temp;
        temp=0;
    }
    file.close();
    cout<<"Sum="<<sum<<endl;
    return 0;
}
