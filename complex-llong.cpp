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
		complex_llong(const complex_llong orig);

		void set(long long real, long long imag);
		long long getreal(void);
		long long getimag(void);

	//operator overloading
		
		complex_llong& operator=(const complex_llong& orig);
		complex_llong& operator+=(const complex_llong& orig);
		complex_llong& operator-=(const complex_llong& orig);
		complex_llong& operator*=(const complex_llong& orig);

		friend complex_llong operator+(const complex_llong& orig1, const complex_llong& orig2);
		friend complex_llong operator-(const complex_llong& orig1, const complex_llong& orig2);
		friend complex_llong operator*(const complex_llong& orig1, const complex_llong& orig2);
		
		friend std::ostream& operator<<(std::ostream& os, const complex_llong& orig);
		friend std::istream& operator>>(std::istream& is, complex_llong& orig);

	//computations

		void conjugate(complex_llong &orig);
		void norm2(complex_llong %orig);

	private: 
		long long real;
		long long imag;
		bool are_squared;

};
#endif /* end header guard */
