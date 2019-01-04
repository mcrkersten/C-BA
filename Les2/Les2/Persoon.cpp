#include <iostream>
#include "Persoon.h"
using namespace std;

//Contstructor
Persoon::Persoon() {
}

int Persoon::getAge() {
	return leeftijd;
}

string Persoon::getName() {
	return naam;
}