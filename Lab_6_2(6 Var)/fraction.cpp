#include "fraction.h"
#include <iostream>

using namespace std;

//=============================================== �����������/����������

Fraction::Fraction() {
	Count++;
	
	setNum();
}

Fraction::~Fraction() {
	//cout << "\n����� " << numerator << "/" << denominator << " ���� �������!";
}

// ���� ��������� � �����������
void Fraction::setNum() {
	cout << "������� �������� ��� ��������� : ";
	cin >> numerator;
	cout << "\n� ��� ����������� : ";
	cin >> denominator;
}

// ���-�� ��������
int Fraction::getCount() {
	return Count;
}

// � ������� �������� ����������� ������������� ������ �������� 2-� �����
int Fraction::gcd(int n, int m) {
	if (m == 0) return n;
		return gcd(m, n % m);
}

// ���������� �������� ����� �� ����� �������� 
void Fraction::reduce() {
	for (int i = 0; i <= 0;) {
		if (numerator % 2 == 0 && denominator % 2 == 0) {
			numerator /= 2;
			denominator /= 2;
		}
		else if (numerator % 3 == 0 && denominator % 3 == 0) {
			numerator /= 3;
			denominator /= 3;
		}
		else if (numerator % 5 == 0 && denominator % 5 == 0) {
			numerator /= 5;
			denominator /= 5;
		}
		else if (numerator % 7 == 0 && denominator % 7 == 0) {
			numerator /= 7;
			denominator /= 7;
		}
		else i++;
	}
}

// ����� �� ������� �������� �������������� �� ���������� � �����
void Fraction::printAsFraction(double decimal_fraction) {
	int denominatorSec = 100;
	int numeratorSec = decimal_fraction * 100;

	for (int i = 0; i <= 0;) {
		if (numeratorSec % 2 == 0 && denominatorSec % 2 ==0) {
			numeratorSec /= 2;
			denominatorSec /= 2;
		}else if(numeratorSec % 3 == 0 && denominatorSec % 3 == 0) {
			numeratorSec /= 3;
			denominatorSec /= 3;
		}else if (numeratorSec % 5 == 0 && denominatorSec % 5 == 0) {
			numeratorSec /= 5;
			denominatorSec /= 5;
		}
		else if (numeratorSec % 7 == 0 && denominatorSec % 7 == 0) {
			numeratorSec /= 7;
			denominatorSec /= 7;
		}
		else i++;
	}

	cout << "\n��������� �������� : " << decimal_fraction << " , ��������������� �������� : " << numeratorSec << "/" << denominatorSec << "\n";
}

// ��� � ����������, �� ��������� �������� � �������� ��������
void Fraction::printAsFraction(char decimal_fraction[]) {
	int denominatorSec = 100;
	int numeratorSec = std::atof(decimal_fraction)* 100;

	for (int i = 0; i <= 0;) {
		if (numeratorSec % 2 == 0 && denominatorSec % 2 == 0) {
			numeratorSec /= 2;
			denominatorSec /= 2;
		}
		else if (numeratorSec % 3 == 0 && denominatorSec % 3 == 0) {
			numeratorSec /= 3;
			denominatorSec /= 3;
		}
		else if (numeratorSec % 5 == 0 && denominatorSec % 5 == 0) {
			numeratorSec /= 5;
			denominatorSec /= 5;
		}
		else if (numeratorSec % 7 == 0 && denominatorSec % 7 == 0) {
			numeratorSec /= 7;
			denominatorSec /= 7;
		}
		else i++;
	}

	cout << "\n��������� �������� : " << decimal_fraction << " , ��������������� �������� : " << numeratorSec << "/" << denominatorSec << "\n";
}

// ����� �����
void Fraction::printFraction() {
	cout << "\n����� : " << numerator << "/" << denominator << "\n";
}

// ��������� ���������� � �������
Fraction Fraction::operator +(const Fraction& other) {
	Fraction result(*this);
	result.numerator = (this->numerator * other.denominator) + (other.numerator * this->denominator);
	result.denominator = this->denominator * other.denominator;
	return result;
}

Fraction Fraction::operator -(const Fraction& other) {
	Fraction result(*this);
	result.numerator = (this->numerator * other.denominator) - (other.numerator * this->denominator);
	result.denominator = this->denominator * other.denominator;
	return result;
}

Fraction Fraction::operator *(const Fraction& other) {
	Fraction result(*this);
	result.numerator = this->numerator*other.numerator;
	result.denominator = this->denominator * other.denominator;
	return result;
}

Fraction Fraction::operator /(const Fraction& other) {
	Fraction result(*this);
	result.numerator = this->numerator * other.denominator;
	result.denominator = this->denominator * other.numerator;
	return result;
}

// Static value Count
int Fraction::Count = 0;