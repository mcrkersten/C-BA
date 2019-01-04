#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(int age, string naam, float gemGPA) : leeftijd(age), naam(naam), gemGPA(gemGPA) {
}

int Student::getAge() {
	return leeftijd;
}

string Student::getName() {
	return naam;
}

float Student::getGemGPA() {
	return gemGPA;
}