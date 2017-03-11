//Written by Steven An
//Apache Licence
//implementation of complex long long integer object

#include "complex-llong.h"
#include<iostream>

//Constructors

Complex_llong::Complex_llong(void){
	
	real = imag = 0LL;

	are_squared = false;

}

Complex_llong::Complex_llong(long long real, long long imag){

	this->real = real;
	this->imag = imag;

	are_squared = false;

}

Complex_llong::Complex_llong(const Complex_llong op){

	real = op.real;
	imag = op.imag;

	are_squared = op.are_squared;

}

//Member functions

void Complex_llong::set(long long real, long long imag);
	
	this->real = real;
	this->imag = imag;

	are_squared = false;

}

Complex_llong& Complex_llong::operator=(const Complex_llong& op){

	if(&op == this)
		return *this;

	real = op.real;
	imag = op.imag

	are_squared = op.are_squared;

}

Complex_llong& Complex_llong::operator+=(const Complex_llong& op){

	real = real + op.real;
	imag = imag + op.imag;

	return *this;

}

Complex_llong& Complex_llong::operator-=(const Complex_llong& op){

	real = real - op.real;
	imag = imag - op.imag;

	return *this;

}

Complex_llong& Complex_llong::operator*=(const Complex_llong& op){

	long long real_tmp, imag_tmp;

	real_tmp = real;
	imag_tmp = imag;
	
	real = real_tmp * op.real - imag_tmp * op.imag;
	imag = real_tmp * op.imag + imag_tmp * op.real;

}

Complex_llong operator+(const Complex_llong& op1, const Complex_llong& op2){

	Complex_llong tmp(op1.real, op1.imag);

	return tmp += op2;

}

Complex_llong operator-(const Complex_llong& op1, const Complex_llong& op2){

	Complex_llong tmp(op1.real, op1.imag);

	return tmp -= op2;

}

Complex_llong operator*(const Complex_llong& op1, const Complex_llong& op2){

	Complex_llong tmp(op1.real, op1.imag);
	
	return tmp *= op2;

}

std::ostream& operator<<(std::ostream& os, const Complex_llong& op){

	os << "real: " << op.real << " imag: " << op.imag << std::endl;

	return os;

}

std::istream& operator>>(std::istream& is, Complex_llong& op){

	long long re, im;
	bool sq;

	std::cin >> re >> im >> sq;

	if (std::cin){

		op.real = re;
		op.imag = im;
		op.are_squared = sq;

	} else {
	
	//throw an exception for bad input

	}

	return is;

}


