#pragma once
#include <iostream>
#include "Class Polis.h"
using namespace std;

class OMS : private Polis
{
private:
	struct InfoOms
	{
		string birthDate;
		string gender;
	}Oms;
public:
	OMS(int polisNumber, string firstName, string lastName, string validity, string birthDate, string gender)
		: Polis(polisNumber, firstName, lastName, validity), Oms{ birthDate, gender }
	{
	}
	~OMS()
	{
		cout << "������ ������ ������ OMS ��� ������� ������ " << InfoPolis.polisNumber << " ���� �������!" << endl;
	}
	void print()
	{
		cout << "\n����� ������ ���: " << InfoPolis.polisNumber << endl;
		cout << "���: " << InfoPolis.firstName << endl;
		cout << "�������: " << InfoPolis.lastName << endl;
		cout << "���: " << Oms.gender << endl;
		cout << "���� ��������: " << Oms.birthDate << endl;
		cout << "���� �������� ������: " << InfoPolis.validity << endl;
	}
	int GetPolisNumber()
	{
		return InfoPolis.polisNumber;
	}
	string GetLastName()
	{
		return InfoPolis.lastName;
	}
	bool operator==(string SearchLastName);
};

bool OMS::operator==(string SearchLastName)
{
	return InfoPolis.lastName == SearchLastName;
}
