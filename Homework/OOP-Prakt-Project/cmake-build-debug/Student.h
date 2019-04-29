//
// Created by petko on 29/04/19.
//
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#ifndef OOP_PRAKT_PROJECT_STUDENT_H
#define OOP_PRAKT_PROJECT_STUDENT_H

class Student {
    int fn;
    short  grade;
    char* name;
    char* surname;
    void copyStudent(int, char[], char[], short);
    void deleteStudent();
public:
    Student(int, char[], char[], short);
    Student(Student& );
    Student& operator=(Student& );
    ~Student();
    int getFn() const;
    short getGrade() const;
    char*  getName() const;
    char* getSurname() const;
    void setFn(int);
    void setGrade(short);
    void setName(char*);
    void setSurname(char*);
    bool checkStudent(ifstream&) const;
    void save(ofstream&) const;
};


#endif //OOP_PRAKT_PROJECT_STUDENT_H
