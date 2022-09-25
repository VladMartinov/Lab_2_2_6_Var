#pragma once


class Fraction {
public:
	
//======================================================= Конструкторы/Деструкторы 
	Fraction();
	virtual~Fraction();

//======================================================= установка значений для дроби и её вывод
	void setNum();
	void printFraction();

public:
		
	// ввод  2-х чисел и поиск общего делителя
	static int gcd(int n, int m);
	// Получение кол-ва объектов данного класса
	static int getCount();
	// Сокращение дроби на максимальный общий делитель
	void reduce();
	// Получение числа в формате double и char* и приведение его в формат дроби
	static void printAsFraction(double decimal_fraction);
	static void printAsFraction(char* decimal_fraction);

	// Операции между дробями сумма/разность/деление/умножение
	Fraction operator +(const Fraction& other);
	Fraction operator -(const Fraction& other);
	Fraction operator /(const Fraction& other);
	Fraction operator *(const Fraction& other);



private:
	// элементы класса
	int numerator, denominator;
	static int Count;
};