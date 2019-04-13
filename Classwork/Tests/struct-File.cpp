#include  <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct  Book
{
    char name[31];
    char author[31];
};
void del(int pos, char *path){
  fstream f;
  char str[100];
  strcpy(str,path);
  f.open(str,ios::out|ios::binary);
  if(!f) cerr<<"Error with Delete!";
  //f.seekp(sizeof(Book)*pos);
  Book emp;
  f.write((char*)&emp,sizeof(Book));
  f.close();
}
int main(){
    char path[]="./books.bin";
    int n=2;
    Book bk[n];
    fstream f;
    f.open(path,ios::out | ios::binary);
    if(!f) cerr<<"Error with file!";
    for(int i=0;i<n;i++){
      cout<<"Enter Book Name:";
      cin.getline(bk[i].name,30);
      cout<<"Enter Book Author:";
      cin.getline((bk[i].author),30);
      f.write((char*)&bk[i],sizeof(Book));
    }
    del(2,path);
    f.close();
    f.open(path,ios::in | ios::binary);
    Book bk2;
    for(int i=0;i<n;i++){
      f.seekg(sizeof(Book)*i);
      f.read((char*)&bk2,sizeof(Book));
      cout<<bk2.name<<' '<<bk2.author<<endl;
    }
    f.close();
    return 0;
}
