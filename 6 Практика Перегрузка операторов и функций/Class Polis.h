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
		cout << "Полис под номером: " << polisNumber << " был создан." << endl;
	}
	~Polis()
	{
		cout << "Память полиса под номером: " << InfoPolis.polisNumber << " была очищена!" << endl;
	}
	bool operator==(string SearchLastName);
};

bool Polis::operator==(string SearchLastName)
{
	return InfoPolis.lastName == SearchLastName;
}
