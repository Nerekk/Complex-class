#ifndef __Complex_H__
#define __Complex_H__
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;



class Complex {
  private:
    double Real, Imag;

  public:
    Complex(double Real = 0, double Imag = 0) : Real(Real), Imag(Imag){};

    Complex& operator=(const Complex& s)
    {
        Real = s.Real;
        Imag = s.Imag;
        return *this;
    };

    Complex operator-() const
    {
        return Complex(-Real, -Imag);
    };

    Complex& operator=(double co)
    {
        Real = co;
        Imag = 0;
        return *this;
    };

    Complex operator+(const Complex& co) const
    {
        Complex n;
        n.Real = this->Real + co.Real;
        n.Imag = this->Imag + co.Imag;
        return n;
    };

    Complex& operator-=(Complex co)
    {
        Real -= co.Real;
        Imag -= co.Imag;
        return *this;
    };

	Complex operator/(Complex c1) const
	{
		Complex n;
		double botfraction = (c1.Real * c1.Real) + (c1.Imag * c1.Imag);
		n.Real = ((this->Real * c1.Real) + (this->Imag * c1.Imag))/botfraction;
		n.Imag = ((this->Imag * c1.Real) - (this->Real * c1.Imag))/botfraction;
		return n;
	};
	
	
	Complex& operator/=(const Complex c1)
	{
		double botfraction = (c1.Real * c1.Real) + (c1.Imag * c1.Imag);
		Real = ((this->Real * c1.Real) + (this->Imag * c1.Imag))/botfraction;
		Imag = ((this->Imag * c1.Real) - (this->Real * c1.Imag))/botfraction;
		return *this;
	};
	
	
	double abs() const
	{
		double n;
		n = sqrt((this->Real * this->Real)+(this->Imag * this->Imag));
		return n;
	};
	
	double phase() const
	{
		double radians = atan2(this->Imag, this->Real);
		if (this->Imag < 0) radians += (2*M_PI);
		double degrees;
		degrees = radians * (180/M_PI);
		return degrees;
	};
	
	Complex conj() const
	{
		Complex n;
		n.Real = this->Real;
		n.Imag = -this->Imag;
		return n;
	};
	
	

    friend Complex operator-(Complex, Complex);
    friend Complex operator/(double, Complex);
    friend ostream& operator<<(ostream& s, const Complex& c)
    {
        s << "(" << c.Real << "," << c.Imag << ")";
        return s;
    };
};

inline Complex operator-(Complex s1, Complex s2)
{
    Complex n(s1);
    return n -= s2;
}

inline Complex operator/(double c1, Complex c2)
{
	Complex out;
	out.Real = c1 * c2.Real/((c2.Real * c2.Real)+(c2.Imag * c2.Imag));
	out.Imag = c1 * (-c2.Imag)/((c2.Real * c2.Real)+(c2.Imag * c2.Imag));
	return out;
}



#endif /* __Complex_H__ */
