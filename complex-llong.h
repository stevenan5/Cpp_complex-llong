//Written by Steven An
//Apache License
//Header file for complex long long integer object

#ifndef COMPLEX_LLONG
#define COMPLEX_LLONG

#include<iostream>

class complex_llong {
	
	public:
		complex_llong(void);
		complex_llong(long long real, long long imag);
		complex_llong(const complex_llong op);

		void set(long long real, long long imag);
		long long getreal(void);
		long long getimag(void);

	//operator overloading
		
		complex_llong& operator=(const complex_llong& op);
		complex_llong& operator+=(const complex_llong& op);
		complex_llong& operator-=(const complex_llong& op);
		complex_llong& operator*=(const complex_llong& op);

		friend complex_llong operator+(const complex_llong& op1, const complex_llong& op2);
		friend complex_llong operator-(const complex_llong& op1, const complex_llong& op2);
		friend complex_llong operator*(const complex_llong& op1, const complex_llong& op2);
		
		friend std::ostream& operator<<(std::ostream& os, const complex_llong& op);
		friend std::istream& operator>>(std::istream& is, complex_llong& op);

	//computations

		void conjugate(complex_llong &op);
		void norm2(complex_llong &op);

	private: 
		long long real;
		long long imag;
		bool are_squared;

};
#endif /* end header guard */
