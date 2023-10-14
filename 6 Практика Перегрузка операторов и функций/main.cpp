#include <iostream>
#include <Windows.h>
#include <random>
#include "Class OMS.h"
#include "Class House.h"
#include <iomanip>
using namespace std;

//Вариант А.
//Задание 1. Использовать структуру классов, 
//спроектированную на  практическом занятии №5.
//Наследование одного из производных классов осуществить по типу private.
//Перегрузить оператор для работы с объектами классов 
//и использовать его для определения Вычисляемого показателя.


int GetRandomNumber(int min, int max)
{
int GetRandomNumber(int min, int max) {
	static random_device rd;
	static mt19937 generator(rd());
	uniform_int_distribution<int> distribution(min, max);

	int randomValue;

	randomValue = distribution(generator);

	return randomValue;
}
int CountLastName(OMS* oms, House* house, string searchLastName)
int CountLastName(OMS* oms, House* house)
{
	if (*oms == searchLastName)
	{
		return 1;
	else if (*house == searchLastName)
	{
		return 1;
	}
	//return 0;
}
int CountLastName(OMS* oms, string searchLastName)
{
	if (*oms == searchLastName)
	{
		return 1;
	}
	
}
int CountLastName( House* house, string searchLastName)
{
	if (*house == searchLastName)
	{
		return 1;
	}
	//return 0;
}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int numPolis = 5;
	int count = 0;
	OMS** omsArray = new OMS * [numPolis]
		{
			new OMS(GetRandomNumber(0, 2000), "Иван", "Иванов", "01.01.2025", "01.01.1990", "Мужской"),
				new OMS(GetRandomNumber(0, 2000), "Мария", "Кузнецова", "01.01.2024", "15.05.1985", "Женский"),
				new OMS(GetRandomNumber(0, 2000), "Петр", "Федоров", "01.01.2025", "05.09.1980", "Мужской"),
				new OMS(GetRandomNumber(0, 2000), "Алексей", "Федоров", "01.01.2023", "20.03.1975", "Мужской"),
				new OMS(GetRandomNumber(0, 2000), "Елена", "Ковалева", "01.01.2024", "10.12.1992", "Женский")
		};

	for (int i = 0; i < numPolis; i++)
	{
		omsArray[i]->print();
	}

	House** houseArray = new House * [numPolis]
		{
			new House(GetRandomNumber(10000, 20000), "Денис", "Михайлов", "01.01.2023", "ул. Гагарина, д. 789", GetRandomNumber(22, 59), GetRandomNumber(300000, 700000), GetRandomNumber(200000, 500000)),
				new House(GetRandomNumber(10000, 20000), "Ольга", "Козлова", "01.01.2024", "ул. Пушкина, д. 456", GetRandomNumber(22, 59), GetRandomNumber(300000, 700000), GetRandomNumber(200000, 500000)),
				new House(GetRandomNumber(10000, 20000), "Андрей", "Иванов", "01.01.2023", "ул. Ленина, д. 123", GetRandomNumber(22, 59), GetRandomNumber(300000, 700000), GetRandomNumber(200000, 500000)),
				new House(GetRandomNumber(10000, 20000), "Сергей", "Иванов", "01.01.2025", "ул. Советская, д. 321", GetRandomNumber(22, 59), GetRandomNumber(300000, 700000), GetRandomNumber(200000, 500000)),
				new House(GetRandomNumber(10000, 20000), "Кирилл", "Федоров", "01.01.2024", "ул. Ломоносова, д. 654", GetRandomNumber(22, 59), GetRandomNumber(300000, 700000), GetRandomNumber(200000, 500000))
		};

	for (int i = 0; i < numPolis; i++)
	{
		houseArray[i]->print();
	}
	string searchLastName = "";
	while (searchLastName != "q" && searchLastName != "Q")
	{
		cout << "Введите фамилию для поиска: ";
		cin >> searchLastName;
	cin >> searchLastName;
		for (int k = 0; k < numPolis; k++)
		{
			count += CountLastName(omsArray[k], houseArray[k], searchLastName);
		}

		cout << "Количество полюсов на заданную фамилию: " << count << endl;
		count = 0;
	}
	cout << "Количество полюсов на заданную фамилию: " << count << endl;

	for (int i = 0; i < numPolis; i++)
	{
		cout << "\n" << setfill('-') << setw(60) << " " << endl;
		delete omsArray[i];
	}
	delete[] omsArray;

	for (int i = 0; i < numPolis; i++)
	{
		cout << "\n" << setfill('-') << setw(60) << " " << endl;
		delete houseArray[i];
	}
	delete[] houseArray;
	//return 0;
}