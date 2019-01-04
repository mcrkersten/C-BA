#pragma once
#include <iostream>
#include "Persoon.h"

class Student : public Persoon {
private:
	int leeftijd;
	float gemGPA;
	string naam;

public:
	Student(int age, string naam, float gemGPA);
	int getAge();
	string getName();
	float getGemGPA();
};
