#pragma once
#pragma warning(disable:4996)
#include<cstring>
template <typename T>
class Slujitel
{
protected:
	char* name;
	int years;
	T zaplata;
private:
	void copySlujitel(char* =nullptr, int = 0, T = T());
	void deleteSlujitel();
public:
	Slujitel(char* =nullptr, int = 0, T = T());
	Slujitel(Slujitel<T>&);
	~Slujitel();
	Slujitel& operator=(Slujitel<T>&);
	char* getName() {
		return this->name;
	}
	int getYears() {
		return this->years;
	}
	T getZaplata() {
		return this->zaplata;
	}
	void setName(const char* name) {
		strcpy(this->name, name);
	}
	void setYears(const int years) {
		this->years = years;
	}
	void setZaplata(const T zaplata) {
		this->zaplata = zaplata;
	}
};
template  <typename T>
void Slujitel<T>::copySlujitel(char* name, int years, T zap) {
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->years = years;
	this->zaplata = zap;
}
template  <typename T>
void Slujitel<T>::deleteSlujitel() {
	delete[] this->name;
}
template  <typename T>
Slujitel<T>::Slujitel(char* name, int years, T zap) {
	copySlujitel(name, years, zap);
}
template  <typename T>
Slujitel<T>::Slujitel(Slujitel& s) {
	copySlujitel(s.name, s.years, s.zaplata);
}
template  <typename T>
Slujitel<T>::~Slujitel() {
	deleteSlujitel();
}
template  <typename T>
Slujitel<T>& Slujitel<T>::operator=(Slujitel& s) {
	if (*this != s) {
		deleteSlujuitel();
		copySlujitel(s.name, s.years, s.zaplata);
	}
	return *this;
}