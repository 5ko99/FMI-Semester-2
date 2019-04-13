#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fileI;
    ofstream fileO;
    char ch;
    int n=-1;
    int arr[2];
    fileI.open("num.txt");
    fileO.open("num2.txt");
    if(!fileO||!fileI){
        cerr<<"ERROR";
    }
    while(!fileI.eof()){
        fileI.get(ch);
        if(ch!=' ' && ch!='\n'){
          n++;
          arr[n]=(int)ch;
        }
        if(ch=='\n'){
            n=0;
            if(arr[0]>arr[1]){
                swap(arr[0],arr[1]);
                }
                fileO<<arr[0];
                fileO<<' ';
                fileO<<arr[1];
                fileO<<'\n';
        }
    }
    fileO.close();
    fileI.close();
    return 0;
}
