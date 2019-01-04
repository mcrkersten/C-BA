#include <iostream>
#include "Docent.h"
using namespace std;

Docent::Docent(int age, string naam, string vak) : leeftijd(age), naam(naam), vak(vak) {
}

int Docent::getAge() {
	return leeftijd;
}

string Docent::getName() {
	return naam;
}

string Docent::getVak() {
	return vak;
}