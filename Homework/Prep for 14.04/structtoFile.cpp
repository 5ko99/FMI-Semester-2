#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
struct Book
{
    char author[31];
    char tittle[31];
};


int main(){
    int n=1;
    fstream f;
    f.open("books.bin",ios::binary | ios::app);
    if(!f){
        cerr<<"Error with file!";
    }
    Book book;
    for(int i=0;i<n;i++){
        printf("Book[%d] \n Author:",i);
        cin.getline(book.author,30);
        printf("Tittle:");
        cin.getline(book.tittle,30);
        f.write((char*)&book,sizeof(Book));
    }
    f.close();
    f.open("books.bin",ios::binary|ios::in);
    if(!f){
        cerr<<"Error with file!";
    }
     int i=0;
    f.seekg(0);
    while(f.read((char*)&book,sizeof(Book))){
        printf("Author:");
        cout<<book.author<<" ";
        cout<<"Tittle:"<<book.tittle<<endl;
        i++;
        f.seekg(i*sizeof(Book));
    }
    f.close();
    return 0;
}