//
// Created by petko on 29/04/19.
//

#include "Student.h"
//Help Functions
void Student::copyStudent(int fn, char *name, char *surname, short grade){
    this->fn=fn;
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->surname=new char[strlen(surname)+1];
    strcpy(this->surname,surname);
    this->grade=grade;
}
void Student::deleteStudent() {
    delete[] name;
    delete[] surname;
}
//Constructors
Student::Student(int fn, char *name, char *surname, short grade) {
    copyStudent(fn,name,surname,grade);
}
Student::Student(Student& st) {
    copyStudent(st.fn,st.name,st.surname,st.grade);
}
Student& Student::operator=(Student& st) {
    deleteStudent();
    copyStudent(st.fn,st.name,st.surname,st.grade);
}
Student::~Student() {
    deleteStudent();
}
//Getters
int Student::getFn() const{
    return  this->fn;
}
char* Student::getName() const{
    return this->name;
}
char* Student::getSurname() const{
    return  this->surname;
}
short Student::getGrade() const{
    return  this->grade;
}
//Setters
void Student::setFn(int fn) {
    this->fn=fn;
}
void Student::setName(char* name ) {
    delete[] this->name;
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
}
void Student::setSurname(char* surname) {
    delete[] this->surname;
    this->surname=new char[strlen(surname)+1];
    strcpy(this->surname,surname);
}
void Student::setGrade(short grade) {
    this->grade=grade;
}
//Functions for db
bool Student::checkStudent(ifstream& db) const {
    int fn;
    db.seekg(ios::beg);
    while(!db.eof()){
        db>>fn;
        db.ignore(256,'\n');
        if(this->fn==fn) return  false;
    }
    if(this->grade<2 || this->grade>6) return  false;
    return true;
}
void Student::save(ofstream& db) const {
    db<<this->fn<<' '<<this->name<<' '<<this->surname<<' '<<this->grade<<endl;
    cout<<"Record saved!"<<endl;
}
