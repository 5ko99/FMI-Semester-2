//#include "cmake-build-debug/Student.h"
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
    Student st(4,"Krasi","Kaemnov",6);
    //saveStudent(dbO,dbI,st);
    //sequentialSearch(123,dbI);
    updateStudent(path,dbI,4,6);
    dbO.close();
    dbI.close();
    return 0;
}
