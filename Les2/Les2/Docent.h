#pragma once
#include <iostream>
#include "Persoon.h"

class Docent : public Persoon {
private:
	int leeftijd;
	string naam, vak;

public:
	Docent(int age, string naam, string vak);
	int getAge();
	string getName();
	string getVak();
};