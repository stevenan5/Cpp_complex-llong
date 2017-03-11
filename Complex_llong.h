//Written by Steven An
//Apache License
//Header file for complex long long integer object

#ifndef COMPLEX_LLONG
#define COMPLEX_LLONG

#include<iostream>

class Complex_llong {
	
	public:
		Complex_llong(void);
		Complex_llong(long long real, long long imag);
		Complex_llong(const Complex_llong op);

		void set(long long real, long long imag);
		long long getreal(void);
		long long getimag(void);

	//operator overloading
		
		Complex_llong& operator=(const Complex_llong& op);
		Complex_llong& operator+=(const Complex_llong& op);
		Complex_llong& operator-=(const Complex_llong& op);
		Complex_llong& operator*=(const Complex_llong& op);

		friend Complex_llong operator+(const Complex_llong& op1, const Complex_llong& op2);
		friend Complex_llong operator-(const Complex_llong& op1, const Complex_llong& op2);
		friend Complex_llong operator*(const Complex_llong& op1, const Complex_llong& op2);
		
		friend std::ostream& operator<<(std::ostream& os, const Complex_llong& op);
		friend std::istream& operator>>(std::istream& is, Complex_llong& op);

	//computations

		void conjugate(Complex_llong &op);
		void norm2(Complex_llong &op);

	private: 
		long long real;
		long long imag;
		bool are_squared;

};
#endif /* end header guard */
