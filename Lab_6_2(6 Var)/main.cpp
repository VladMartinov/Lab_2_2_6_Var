#include "fraction.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	Fraction FirsnNum;
	FirsnNum.printFraction();
	Fraction SecondNum;
	SecondNum.printFraction();

	cout << "\nСумма 2-х дробей : ";
	Fraction ResultNumSum = FirsnNum + SecondNum;
	ResultNumSum.printFraction();

	cout << "\nРазница 2-х дробей : ";
	Fraction ResultNumDifference = FirsnNum - SecondNum;
	ResultNumDifference.printFraction();

	cout << "\nПеремножение 2-х дробей : ";
	Fraction ResultNumMultiply = FirsnNum * SecondNum;
	ResultNumMultiply.printFraction();

	cout << "\nДеление 2-х дробей : ";
	Fraction ResultNumDivision = FirsnNum / SecondNum;
	ResultNumDivision.printFraction();

	int gcdNum = FirsnNum.gcd(100, 12);
	cout << "\ngcdNum : " << gcdNum;

	FirsnNum.printAsFraction(0.43);

	char charNum[] = "0,25";
	FirsnNum.printAsFraction(charNum);

	cout << "\nПреобразованное число Первой дроби: ";
	FirsnNum.reduce();
	FirsnNum.printFraction();

	cout << "\nCount of classes : " << FirsnNum.getCount() << "\n";
	return 0;
}
