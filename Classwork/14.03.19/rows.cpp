#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file;
    char str[100];
    int n=-1;
    file.open("file.txt");
    while(!file.eof()){
        file.getline(str,100,'\n');
        n++;
    }
    cout<<n<<endl;
    file.close();
    return 0;
}
