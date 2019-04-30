//
// Created by petko on 29/04/19.
//
#ifndef OOP_PRAKT_PROJECT_STUDENT_H
#define OOP_PRAKT_PROJECT_STUDENT_H
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Student {
    int fn;
    short  grade;
    char* name;
    char* surname;
    void copyStudent(int, const char*, const char*, short);
    void deleteStudent();
public:
    Student(int, const char*, const char*, short);
    Student(Student& );
    Student& operator=(const Student& );
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
