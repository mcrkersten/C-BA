#pragma once
#include <iostream>
using namespace std;

class Persoon {
private:
	int leeftijd;
	string naam;

public:
	Persoon();
	virtual int getAge();
	virtual string getName();
};