//
// Created by petko on 29/04/19.
//
#include "Functions.h"
void updateDb(ifstream&,ofstream&,const char*);
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
    bool flag=false;
    int fnLocal;
    char line[512];
    dbI.clear();
    dbI.seekg(0, ios::beg);
    ofstream temp;
    temp.open("../temp.db",ios::out|ios::app);
    while (!dbI.eof()) {
        dbI >> fnLocal;
        if (fn == fnLocal) {
            dbI.ignore(256,'\n');
            flag= true;
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
        cout<<"Record deleted!"<<endl;
    }else{
        cerr<<"Record not found!"<<endl;
    }
}
void readCommands(ifstream& dbI,ofstream& dbO, const char* path){
    bool flag = true;
    char cmd[256],name[256],surname[256];
    int fn;
    short grade;
    do{
        cin>>cmd;
        cin.ignore();
        if(!strcmp(cmd,"exit")){
            flag= false;
            continue;
        }
        if(!strcmp(cmd,"create")){
            cin>>fn;
            cin.ignore();
            cin.getline(name,255,' ');
            cin.getline(surname,255,' ');
            cin>>grade;
            cin.ignore();
            Student st(fn,name,surname,grade);
            saveStudent(dbO,dbI,st);
            updateDb(dbI,dbO,path);
            continue;
        }
        if(!strcmp(cmd,"search")){
            cin>>fn;
            cin.ignore();
            sequentialSearch(fn,dbI);
            updateDb(dbI,dbO,path);
            continue;
        }
        if(!strcmp(cmd,"update")){
            cin>>fn;
            cin.ignore();
            cin>>grade;
            cin.ignore();
            updateStudent(path,dbI,fn,grade);
            updateDb(dbI,dbO,path);
            continue;
        }
        if(!strcmp(cmd,"delete")){
            cin>>fn;
            cin.ignore();
            deleteStudent(path,dbI,fn);
            updateDb(dbI,dbO,path);
            continue;
        }
    }while(flag);
}
void updateDb(ifstream& dbI,ofstream& dbO, const char* path){
    dbI.close();
    dbO.close();
    dbO.open(path,ios::out|ios::app);
    dbI.open(path,ios::in);
}