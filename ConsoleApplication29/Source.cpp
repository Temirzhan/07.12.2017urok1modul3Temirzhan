#include<locale.h>
#include<iostream>
#include<stdio.h>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");

region:
	int N;
	cout << "������� ����� �������:" << endl;
	cin >> N;
	if (N == 1)
	{
#pragma region task 1
		/* 1.	���� ����� ����� �.
		��������� ���������� ������������ :
		������ � �������� �������������*/
		int a;
		cout << "������� ����� a" << endl;
		cin >> a;
		if (a > 0)
		{
			cout << "����� �������������" << endl;

		}
		else if (a == 0)
		{
			cout << "���� ����� ����� 0" << endl;
		}

		else {
			cout << "����� �� �������������" << endl;
		}

	}
#pragma endregion


	else if (N == 2)
#pragma region task 2
	{
		/*2.	���� ����� ����� �
		.��������� ���������� ������������ :
		������ � �������� ������*/
		int a;
		cout << "������� ����� A:" << endl;
		cin >> a;
		int b = a % 2;
		if (b != 0)
		{
			cout << "���� ��c�� �� �������" << endl;

		}
		else
		{
			cout << "���� ��c�� ������" << endl;
		}

	}
#pragma endregion task3

	else if (N == 3)
	{
#pragma region Task 4
		int a;
		cout << "������� ����� �:" << endl;
		cin >> a;
		int b;
		cout << "������� ������ b:" << endl;
		cin >> b;
		if ((a > 2) && (b <= 3))
		{
			cout << "�����" << endl;

		}
		else {
			cout << "�������" << endl;
		}

#pragma endregion
	}
	else if (N == 5)
	{
#pragma region Task5
		int a;
		cout << "������� ����� �:" << endl;
		cin >> a;
		int b;
		cout << "������� ������ b:" << endl;
		cin >> b;
		if ((a > 0) || (b < -2))
		{
			cout << "�����" << endl;

		}
		else {
			cout << "�������" << endl;
		}
		goto region;

#pragma endregion
	}
	else if (N == 6)
#pragma region
	{
		int a;
		cout << "������� ����� �:" << endl;
		cin >> a;
		int b;
		cout << "������� ������ b:" << endl;
		cin >> b;
		int c;
		cout << "������� ������ c:" << endl;
		cin >> c;

		if (a < b < c)
		{
			cout << "�����" << endl;

		}
		else {
			cout << "�������" << endl;
		}
	}
#pragma endregion

	else if (N == 7)
#pragma region

	{
		int a;
		cout << "������� ����� �:" << endl;
		cin >> a;
		int b;
		cout << "������� ������ b:" << endl;
		cin >> b;
		int c;
		cout << "������� ������ c:" << endl;
		cin >> c;
		if (a<b<c)
		{
			cout << "�� ����� " << endl;
		}
		else {
			cout << "�� �����" << endl;
		}
	}
#pragma endregion
	else if (N == 8)
#pragma region
	{
		int a;
		cout << "������� ����� �" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		if (a % 2 && b % 2)
		{
			cout << "�����" << endl;

		}
		else
		{
			cout << "�� ����� " << endl;
		}
	}
#pragma endregion
	else if (N == 9)
#pragma region task 9
	{
		int a;
		cout << "������� ����� �" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		if (a % 2 || b % 2)
		{
			cout << "�����" << endl;

		}
		else
		{
			cout << "�� ����� " << endl;
		}
	}
#pragma endregion
	else if (N == 10)
#pragma region task 10
	{
		int a;
		cout << "������� �����" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		if ((a % 2) != (b % 2))
		{
			cout << "�����" << endl;

		}

		else {
			cout << "�� �����" << endl;
		}

	}

#pragma endregion
	else if (N == 11)
#pragma region

	{
		int a;
		cout << "������ �����" << endl;
		cin >> a;
		int b;

		cout << "����� �����" << endl;
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
		cout << "������� ���� �" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		int z = a % 2;
		int f = b % 2;
		if (z = b)
		{
			cout << "�����" << endl;

		}
		else {
			cout << "�� �����" << endl;
		}
	}
#pragma endregion
	else if (N == 13)
#pragma region

	{
		int a;
		cout << "������� ���� �" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		int c;
		cout << "������� ����� �" << endl;
		cin >> c;
		if ((a > 0) && (b > 0) && (c > 0))
		{
			cout << "��� ������������� " << endl;
		}
		else {
			cout << "�� ��� �������������" << endl;
		}

	}
#pragma endregion
	else if (N == 14)
#pragma region

	{
		int a;
		cout << "������� ���� �" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		int c;
		cout << "������� ����� �" << endl;
		cin >> c;
		if ((a > 0) || (b > 0) || (c > 0))
		{
			cout << "����� ���� ������������� " << endl;
		}
		else {
			cout << "�� ������ ��������������" << endl;
		}

	}
#pragma endregion
	else if (N == 15)

#pragma region

	{
		int a;
		cout << "������� ���� �" << endl;
		cin >> a;
		int b;
		cout << "������� ����� �" << endl;
		cin >> b;
		int c;
		cout << "������� ����� �" << endl;
		cin >> c;
		if ((a > 0) != (b > 0) != (c > 0))
		{
			cout << "�����" << endl;
		}
		else {
			cout << "�� �����" << endl;
		}

	}
#pragma endregion
	else if (N == 16)
	{
#pragma region finish
		int a;
		cout << "������� ����� �" << endl;
		cin >> a;
		int b;
		cout << "������� ���� �" << endl;
		cin >> b;
		int c;
		cout << "������� ����� c" << endl;
		cin >> c;
		if (((a > 0) && (b > 0)) != (c > 0))
		{
			cout << "� � � �������������" << endl;
		}
		else if ((a > 0) != ((b > 0) && (c > 0)))
		{
			cout << "� � � �������������" << endl;
		}
		else if (((a > 0) && (c > 0)) != ((b > 0)))
		{
			cout << "� � � �������������" << endl;
		}


#pragma endregion
	}
	goto region;
}






