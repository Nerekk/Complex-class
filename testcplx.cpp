#include <iostream>
using namespace std;
#include "complex.h"
/* Wyjaśnij w jaki sposób realizowane jest odejmowanie liczby zespolonej od liczby całkowitej (np: "b = 2 - a;", gdzie a i b są obiektami klasy Complex). 
 * 
 * Wynikiem takiego działania jest: 
 * liczba rzeczywista klasy b = odejmowanie liczby rzeczywistej klasy a od liczby 2
 * liczba urojona klasy b = jest to liczba przeciwna do liczby urojonej klasy a
 * 
 *  b.real = 2 - a.real
 *  b.imag = -a.real
 * */


void testdivine()
{
	Complex c1(0, 0), c2(10, 15), c3(12, 5), c4(4, 7), c5(5, 2), c6(2,4);
	double d1=2, d2=5, d3=7;
	
	cout << endl << "1. Testy dzialania operatora /" << endl;
	cout << c2 << " / " << c3 << " = " << c2/c3 << endl;
	cout << c3 << " / " << c4 << " = " << c3/c4 << endl;
	cout << c4 << " / " << c5 << " = " << c4/c5 << endl;
	cout << c5 << " / " << c6 << " = " << c5/c6 << endl << endl;
	
	cout << "2. Test dzielenia liczby urojonej przez rzeczywista" << endl;
	cout << c2 << " / " << d2 << " = " << c2/d2 << endl;
	cout << c6 << " / " << d1 << " = " << c6/d1 << endl;
	cout << c4 << " / " << d3 << " = " << c4/d3 << endl << endl;
	
	Complex cc1(2, 2), cc2(4, 4), cc3(6, 12);
	double dd1 = 2;
	cout << "3. Test dzielenia liczby rzeczywistej przez urojona" << endl;
	cout << dd1 << " / " << cc1 << " = " << dd1/cc1 << endl;
	cout << dd1 << " / " << cc2 << " = " << dd1/cc2 << endl;
	cout << dd1 << " / " << cc3 << " = " << dd1/cc3 << endl << endl;
	
	cout << "4. Testy dzialania operatora /=" << endl;
	
	cout << c2 << " /= " << d2 << " = ";
	c2 /= d2;
	cout << c2 << endl;
	
	cout << c6 << " /= " << d1 << " = ";
	c6 /= d1;
	cout << c6 << endl;
	
	cout << c4 << " /= " << d3 << " = ";
	c4 /= d3;
	cout << c4 << endl;
	
	
	cout << c2 << " /= " << c3 << " = ";
	c2 /= c3;
	cout << c2 << endl;
	
	cout << c3 << " /= " << c4 << " = ";
	c3 /= c4;
	cout << c3 << endl;
	
	cout << c4 << " /= " << c5 << " = ";
	c4 /= c5;
	cout << c4 << endl;
	
	cout << c6 << " /= " << c5 << " = ";
	c6 /= c5;
	cout << c6 << endl << endl;
}
void testmethods()
{
	Complex phase1(5, 1), phase2(-1, 5), phase3(-5, -1), phase4(1, -5), cabs(3, 4);
	cout << "5. Test metod" << endl;
	cout << "Faza " << phase1 << " = " << phase1.phase() << endl;
	cout << "Faza " << phase2 << " = " << phase2.phase() << endl;
	cout << "Faza " << phase3 << " = " << phase3.phase() << endl;
	cout << "Faza " << phase4 << " = " << phase4.phase() << endl;
	cout << "Abs " << phase2 << " = " << phase2.abs() << endl;
	cout << "Abs " << phase3 << " = " << phase3.abs() << endl;
	cout << "Abs " << cabs << " = " << cabs.abs() << endl;
	cout << "Conj " << phase1 << " = " << phase1.conj() << endl;
	cout << "Conj " << phase3 << " = " << phase3.conj() << endl << endl;
}
void testmethodsconst()
{
	cout << "6. Test metod dla liczb stalych" << endl;
	const Complex c(3, 4), c2(9, -8);
	cout << "c" << c << " | c.abs() = " << c.abs() << endl;
	cout << "c" << c << " | c.phase() = " << c.phase() << endl;
	cout << "c" << c << " | c.conj() = " << c.conj() << endl;
	cout << c << " / " << c2 << " = " << c/c2 << endl;
	cout << c2 << " / " << c << " = " << c2/c << endl << endl;\
}




int main()
{
	testdivine();
	testmethods();
	testmethodsconst();

	
	return 0;
}
