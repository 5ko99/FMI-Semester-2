//
// Created by petko on 29/04/19.
//
#ifndef OOP_PRAKT_PROJECT_FUNCTIONS_H
#define OOP_PRAKT_PROJECT_FUNCTIONS_H
#include "Student.h"
void saveStudent(ofstream&, ifstream&, const Student&);
void sequentialSearch(int , ifstream& );
void updateStudent(const char*, ifstream&, int, short);
void deleteStudent(const char*,ifstream&,int);
void readCommands(ifstream&,ofstream&,const char*);
void updateDb(ifstream&,ofstream&,const char*);
#endif //OOP_PRAKT_PROJECT_FUNCTIONS_H
