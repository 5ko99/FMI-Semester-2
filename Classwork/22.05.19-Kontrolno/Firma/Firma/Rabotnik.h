#pragma once
#pragma warning(disable:4996)
#include "Slujitel.h"
template <typename Z,typename T>
class Rabotnik:public Slujitel<T>
{
	char* sgrada;
	Z vid;
	void copyRabotnik(char* = nullptr, Z=Z());
	void deleteRabotnik();
public:
	Rabotnik(char* =nullptr, int = 0, T = T(), char* = nullptr, Z=Z());
	Rabotnik(Rabotnik&);
	~Rabotnik();
	Rabotnik& operator=(Rabotnik&);
	char* getSgrada() {
		return this->sgrada;
	}
	Z getVid() {
		return this->vid;
	}
	void setSgrada(const char* s) {
		strcpy(this->sgrada, s);
	}
	void setVid(const Z vid) {
		this->vid = vid;
	}
	bool operator<(Rabotnik<Z,T>& r) {
		if (this->zaplata < r.zaplata) return true;
	}
	bool operator>(Rabotnik<Z, T>& r) {
		if (this->zaplata > r.zaplata) return true;
	}
};
template <typename Z,typename T>
void Rabotnik<Z,T>::copyRabotnik(char* sgrada, Z vid){
	this->sgrada = new char[strlen(sgrada) + 1];
	strcpy(this->sgrada, sgrada);
	this->vid = vid;
}
template <typename Z, typename T>
void Rabotnik<Z, T>::deleteRabotnik() {
	delete[] this->sgrada;
}
template <typename Z, typename T>
Rabotnik<Z, T>::Rabotnik(char* name, int years, T zap, char* sgrada, Z vid):Slujitel<T>(name,years,zap) {
	copyRabotnik(sgrada, vid);
}
template <typename Z, typename T>
Rabotnik<Z, T>::Rabotnik(Rabotnik& r):Slujitel<T>(r) {
	copyRabotnik(r.sgrada, r.vid);
}
template <typename Z, typename T>
Rabotnik<Z, T>::~Rabotnik(){
	deleteRabotnik();
}
template <typename Z, typename T>
Rabotnik<Z, T>& Rabotnik<Z, T>::operator=(Rabotnik& r) {
	if (*this != r) {
		Slujitel<T>::operator=(r);
		deleteRabotnik();
		copyRabotnik(r.sgrada, r.vid);
	}
	return *this;
}
