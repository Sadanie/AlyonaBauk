#include <cmath>
#include <iostream>

class Complex {

	double re;
	double im;
public:
	Complex()
	{
		re = 0.0;
		im = 0.0;
	}
	Complex(double _re, double _im)
	{
		re = _re;
		im = _im;
	}

	Complex operator+(Complex a) const {
		double real, imag;
		real = Re() + a.Re();
		imag = Im() + a.Im();
		return Complex(real, imag);
	}
	Complex operator-(Complex a) {
		double real, imag;
		real = Re() - a.Re();
		imag = Im() - a.Im();
		return Complex(real, imag);
	}
	Complex operator/(Complex a) {
		double real, imag;
		real = (Re()*a.Re() + Im()*a.Im()) / (pow(a.Re(), 2) + pow(a.Im(), 2));
		imag = (Im()*a.Re() - Re()*a.Im()) / (pow(a.Re(), 2) + pow(a.Im(), 2));
		return Complex(real, imag);
	}
	Complex operator*(Complex a) const {
		double real, imag;
		real = Re() * a.Re() - Im() * a.Im();
		imag = Im() * a.Re() + Re() * a.Im();
		return Complex(real, imag);
	}
	double Re() const {
		return re;
	}

	double Im() const {
		return im;
	}

	double getR() const {
		return sqrt(re*re + im*im);
	}

	double getPhi() const {
		return atan(im / re);
	}

	static Complex y(const Complex &z) {

		return (z * Complex(1 / 2, 0) + chComplex(Complex(1, 0) + z));
	}

	static Complex epow(const Complex &z)
	{
		double expRe, expIm;
		expRe = exp(z.Re())*cos(z.Im());
		expIm = exp(z.Re())*sin(z.Im());
		return Complex(expRe, expIm);
	}

	static Complex chComplex(const Complex &z) {

		return Complex(epow(z) + epow(Complex(1, 0) / z)) / Complex(2, 0);

	}

};