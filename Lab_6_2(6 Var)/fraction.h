#pragma once


class Fraction {
public:
	
//======================================================= ������������/����������� 
	Fraction();
	virtual~Fraction();

//======================================================= ��������� �������� ��� ����� � � �����
	void setNum();
	void printFraction();

public:
		
	// ����  2-� ����� � ����� ������ ��������
	static int gcd(int n, int m);
	// ��������� ���-�� �������� ������� ������
	static int getCount();
	// ���������� ����� �� ������������ ����� ��������
	void reduce();
	// ��������� ����� � ������� double � char* � ���������� ��� � ������ �����
	static void printAsFraction(double decimal_fraction);
	static void printAsFraction(char* decimal_fraction);

	// �������� ����� ������� �����/��������/�������/���������
	Fraction operator +(const Fraction& other);
	Fraction operator -(const Fraction& other);
	Fraction operator /(const Fraction& other);
	Fraction operator *(const Fraction& other);



private:
	// �������� ������
	int numerator, denominator;
	static int Count;
};