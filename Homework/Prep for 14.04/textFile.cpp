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
    short n=1;
    fstream f;
    f.open("books.txt",ios::app);
    if(!f){
        cerr<<"Error with file!";
    }
    Book book;
    for(int i=0;i<n;i++){
        printf("Author:");
        cin.getline(book.author,30);
        cout<<"Tittle:";
        cin.getline(book.tittle,30);
        f<<book.author<<" "<<book.tittle<<"\n";
    }
    f.close();
    f.open("books.txt",ios::in);
    if(!f){
        cerr<<"Error with file!";
    }
    char line[31];
    while (!f.eof())
    {
       f.getline(line,30);
       cout<<line<<endl; 
    }
    f.close();
    return 0;
}