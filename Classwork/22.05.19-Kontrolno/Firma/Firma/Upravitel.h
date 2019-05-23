#pragma once
#pragma warning(disable:4996)
#include "Slujitel.h"
#include <iostream>
using namespace std;
template <typename M, typename T>
class Upravitel :public Slujitel<T>
{
	M pos;
	int sgradi;
public:
	Upravitel(char* = nullptr, int = 0, T = T(), M = M(), int = 0);
	void setPos(const M pos) {
		this->pos = pos;
	}
	void setSgradi(const int s) {
		this->sgradi = s;
	}
	M getPos() {
		return this->pos;
	}
	int getSgradi() {
		return this->sgradi;
	}
};
template <typename M, typename T>
Upravitel<M, T>::Upravitel(char* name, int years, T zap, M pos, int sgradi):Slujitel<T>(name,years,zap) {
	this->pos = pos;
	this->sgradi = sgradi;
}
template<typename M, typename T>
ostream& operator<<(ostream& os, Upravitel<M, T>& u) {
	os << u.getName() << ' ' << u.getYears() << ' ' << u.getZaplata() << ' ' << u.getPos() << ' ' <<u.getSgradi();
	return os;
}
template<typename M, typename T>
bool operator!(Upravitel<M, T>& u) {
	if (u.getSgradi() > 10) return true;
	else return false;
}
