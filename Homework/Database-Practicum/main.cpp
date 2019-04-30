#include "Functions.h"
const char* path = "../StudentsGrades.db";
int main() {
    ofstream dbO;
    ifstream dbI;
    dbO.open(path,ios::out | ios::app);
    dbI.open(path,ios::in);
    if(!dbO){
        cerr<<"File could't be opened!"<<endl;
        return 1;
    }
    if(!dbI){
        cerr<<"File could't be opened!"<<endl;
        return 1;
    }
    readCommands(dbI,dbO,path);
    dbO.close();
    dbI.close();
    return 0;
}
