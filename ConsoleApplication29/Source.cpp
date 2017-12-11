#include<locale.h>
#include<iostream>
#include<stdio.h>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");

region:
	int N;
	cout << "Введите номер задания:" << endl;
	cin >> N;
	if (N == 1)
	{
#pragma region task 1
		/* 1.	Дано целое число А.
		Проверить истинность высказывания :
		«Число А является положительным»*/
		int a;
		cout << "ВВедите число a" << endl;
		cin >> a;
		if (a > 0)
		{
			cout << "Число положительное" << endl;

		}
		else if (a == 0)
		{
			cout << "Ваше число равно 0" << endl;
		}

		else {
			cout << "Число не положительное" << endl;
		}

	}
#pragma endregion


	else if (N == 2)
#pragma region task 2
	{
		/*2.	Дано целое число А
		.Проверить истинность высказывания :
		«Число А является четным»*/
		int a;
		cout << "Введите число A:" << endl;
		cin >> a;
		int b = a % 2;
		if (b != 0)
		{
			cout << "ваше чиcло не честное" << endl;

		}
		else
		{
			cout << "Ваше чиcло четное" << endl;
		}

	}
#pragma endregion task3

	else if (N == 3)
	{
#pragma region Task 4
		int a;
		cout << "Введите число а:" << endl;
		cin >> a;
		int b;
		cout << "введите чилсло b:" << endl;
		cin >> b;
		if ((a > 2) && (b <= 3))
		{
			cout << "верно" << endl;

		}
		else {
			cout << "неверно" << endl;
		}

#pragma endregion
	}
	else if (N == 5)
	{
#pragma region Task5
		int a;
		cout << "Введите число а:" << endl;
		cin >> a;
		int b;
		cout << "введите чилсло b:" << endl;
		cin >> b;
		if ((a > 0) || (b < -2))
		{
			cout << "верно" << endl;

		}
		else {
			cout << "неверно" << endl;
		}
		goto region;

#pragma endregion
	}
	else if (N == 6)
#pragma region
	{
		int a;
		cout << "Введите число а:" << endl;
		cin >> a;
		int b;
		cout << "введите чилсло b:" << endl;
		cin >> b;
		int c;
		cout << "введите чилсло c:" << endl;
		cin >> c;

		if (a < b < c)
		{
			cout << "верно" << endl;

		}
		else {
			cout << "неверно" << endl;
		}
	}
#pragma endregion

	else if (N == 7)
#pragma region

	{
		int a;
		cout << "Введите число а:" << endl;
		cin >> a;
		int b;
		cout << "введите чилсло b:" << endl;
		cin >> b;
		int c;
		cout << "введите чилсло c:" << endl;
		cin >> c;
		if (a<b<c)
		{
			cout << "Да между " << endl;
		}
		else {
			cout << "не между" << endl;
		}
	}
#pragma endregion
	else if (N == 8)
#pragma region
	{
		int a;
		cout << "введите число а" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		if (a % 2 && b % 2)
		{
			cout << "верно" << endl;

		}
		else
		{
			cout << "не верно " << endl;
		}
	}
#pragma endregion
	else if (N == 9)
#pragma region task 9
	{
		int a;
		cout << "введите число а" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		if (a % 2 || b % 2)
		{
			cout << "верно" << endl;

		}
		else
		{
			cout << "не верно " << endl;
		}
	}
#pragma endregion
	else if (N == 10)
#pragma region task 10
	{
		int a;
		cout << "введите число" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		if ((a % 2) != (b % 2))
		{
			cout << "верно" << endl;

		}

		else {
			cout << "не верно" << endl;
		}

	}

#pragma endregion
	else if (N == 11)
#pragma region

	{
		int a;
		cout << "первое число" << endl;
		cin >> a;
		int b;

		cout << "втрое число" << endl;
		cin >> b;
		if (a > b)
		{
			cout << a << endl;

		}
		else {
			cout << b << endl;
		}
	}
#pragma endregion

	else if (N == 12)
#pragma region

	{
		int a;
		cout << "введите чила а" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		int z = a % 2;
		int f = b % 2;
		if (z = b)
		{
			cout << "верно" << endl;

		}
		else {
			cout << "не верно" << endl;
		}
	}
#pragma endregion
	else if (N == 13)
#pragma region

	{
		int a;
		cout << "введите чила а" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		int c;
		cout << "введите число с" << endl;
		cin >> c;
		if ((a > 0) && (b > 0) && (c > 0))
		{
			cout << "все положительные " << endl;
		}
		else {
			cout << "не все положительные" << endl;
		}

	}
#pragma endregion
	else if (N == 14)
#pragma region

	{
		int a;
		cout << "введите чила а" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		int c;
		cout << "введите число с" << endl;
		cin >> c;
		if ((a > 0) || (b > 0) || (c > 0))
		{
			cout << "хотяб одно положительное " << endl;
		}
		else {
			cout << "ни одного положительного" << endl;
		}

	}
#pragma endregion
	else if (N == 15)

#pragma region

	{
		int a;
		cout << "введите чила а" << endl;
		cin >> a;
		int b;
		cout << "введите число б" << endl;
		cin >> b;
		int c;
		cout << "введите число с" << endl;
		cin >> c;
		if ((a > 0) != (b > 0) != (c > 0))
		{
			cout << "верно" << endl;
		}
		else {
			cout << "не верно" << endl;
		}

	}
#pragma endregion
	else if (N == 16)
	{
#pragma region finish
		int a;
		cout << "введите число а" << endl;
		cin >> a;
		int b;
		cout << "введите чило б" << endl;
		cin >> b;
		int c;
		cout << "введите число c" << endl;
		cin >> c;
		if (((a > 0) && (b > 0)) != (c > 0))
		{
			cout << "а и б положительные" << endl;
		}
		else if ((a > 0) != ((b > 0) && (c > 0)))
		{
			cout << "б и с положительные" << endl;
		}
		else if (((a > 0) && (c > 0)) != ((b > 0)))
		{
			cout << "а и с положительные" << endl;
		}


#pragma endregion
	}
	goto region;
}






