//#include "cmake-build-debug/Student.h"
#include "cmake-build-debug/functions.h";
int main() {
    ofstream dbO;
    ifstream dbI;
    dbO.open("StudentsGrades.db",ios::out | ios::app);
    dbI.open("StudentsGrades.db",ios::in);
    if(!dbO){
        cerr<<"File could't be opened!"<<endl;
        return 1;
    }
    if(!dbI){
        cerr<<"File could't be opened!"<<endl;
        return 1;
    }
    Student st(11111,"Krasimir","Kamenov",4);
    //saveStudent(dbO,dbI,st);
    //sequentialSearch(45546,dbI);
    dbO.close();
    dbI.close();
    return 0;
}
