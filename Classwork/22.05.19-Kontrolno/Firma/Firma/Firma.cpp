// Firma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Rabotnik.h"
#include "Upravitel.h"
using namespace std;
int main()
{
	Upravitel<int, int> u1("Ivan", 25, 5, 4, 3);
	Upravitel<int, int> u2("Gencho", 25, 5, 4, 225);
	cout << u1<<endl;
	Rabotnik<int,int> r1("Pesho", 5, 450,"aa",5);
	Rabotnik<int, int> r2("Gosho", 5, 600, "abc", 2);
	if (r1 > r2) {
		cout << "Yes"<<endl;
	}
	if (r2 < r1) {
		cout << "Yes" << endl;
	}
	cout << !u1 << endl;
	cout << !u2 << endl;
	system("pause");
    return 0;
}

