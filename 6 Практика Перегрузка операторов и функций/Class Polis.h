#pragma once
#include <iostream>
using namespace std;

class Polis
{
protected:
	struct polisInfo
	{
		int polisNumber;
		string firstName;
		string lastName;
		string validity;
	} InfoPolis;
public:

	Polis(int polisNumber, string firstName, string lastName, string validity)
		: InfoPolis{ polisNumber, firstName, lastName, validity }
	{
		cout << "����� ��� �������: " << polisNumber << " ��� ������." << endl;
	}
	~Polis()
	{
		cout << "������ ������ ��� �������: " << InfoPolis.polisNumber << " ���� �������!" << endl;
	}
	bool operator==(string SearchLastName);
};

bool Polis::operator==(string SearchLastName)
{
	return InfoPolis.lastName == SearchLastName;
}
