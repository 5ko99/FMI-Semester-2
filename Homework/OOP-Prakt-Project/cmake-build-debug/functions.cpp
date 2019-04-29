//
// Created by petko on 29/04/19.
//
#include "functions.h"
void saveStudent(ofstream& dbO,ifstream& dbI, const Student& stC){
    if(stC.checkStudent(dbI)){
        stC.save(dbO);
    }else{
        cerr<<"This FN already exist!";
    }
}

void sequentialSearch(int fn, ifstream& db){
    int fnLocal;
    bool flag= false;
    db.seekg(ios::beg);
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
