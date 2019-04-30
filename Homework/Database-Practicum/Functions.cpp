//
// Created by petko on 29/04/19.
//
#include "Functions.h"
void saveStudent(ofstream& dbO,ifstream& dbI, const Student& stC){
    if(stC.checkStudent(dbI)){
        stC.save(dbO);
    }else{
        cerr<<"This FN already exist!"<<endl;
    }
}

void sequentialSearch(int fn, ifstream& db){
    int fnLocal;
    bool flag= false;
    db.clear();
    db.seekg(0,ios::beg);
    while(!db.eof()){
        db>>fnLocal;
        if(fn==fnLocal){
            flag= true;
            break;
        }
        db.ignore(256,'\n');
    }
    if(flag){
        char line[512];
        db.getline(line,512,'\n');
        cout<<fn<<' '<<line<<endl;
    }else{
        cerr<<"Record not found!"<<endl;
    }
}
void updateStudent(const char* path, ifstream& dbI, int fn, short grade) {
    if(grade<2||grade>6) {
        cerr<<"Grade must be between 2 and 6!"<<endl;
        return;
    }
    bool flag=false;
    int fnLocal;
    char name[256], surname[256];
    char line[512];
    dbI.clear();
    dbI.seekg(0, ios::beg);
    ofstream temp;
    temp.open("../temp.db",ios::out|ios::app);
    while (!dbI.eof()) {
        dbI >> fnLocal;
        if (fn == fnLocal) {
            flag= true;
            dbI>>name;
            dbI>>surname;
            dbI.ignore(256,'\n');
            if(dbI.eof()) break;
            temp<<fn<<' '<<name<<' '<<surname<<' '<<grade<<endl;
        }else{
            dbI.getline(line,512,'\n');
            if(dbI.eof()) break;
            temp<<fnLocal<<line<<endl;
        }
    }
    remove(path);
    rename("../temp.db",path);
    temp.close();
    if(flag){
       cout<<"Record saved!"<<endl;
    }else{
        cerr<<"Record not found!"<<endl;
    }
}
void deleteStudent(const char* path,ifstream& dbI, int fn){

}