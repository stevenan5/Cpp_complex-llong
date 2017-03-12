//Written by Steven An
//Apache Licence
//Tests complex llong functions

#include "Complex_llong.h"
#include<iostream>

using namespace std;

int main(){

	Complex_llong c1;
	Complex_llong c2(3LL, 4LL);
	Complex_llong c3(c2);

	c1.set(1LL, 2LL);

	cout << "C1: " << c1 << "C2: " << c2 << "C3: " << c3;

	cout << "testing get " << c1.getreal() << " " <<  c1.getimag() << endl;

	cout << "C1 + C2: " << c1 + c2 << endl;

	cout << "C3 - C2: " << c3 - c2 << endl;

	cout << "C1 * C2: " << c1 * c2 << endl;

	c2.conjugate();

	cout << "Conjugate C2: " << c2;

	c2.norm2();

	cout << "Norm2 C2: " << c2;

}
