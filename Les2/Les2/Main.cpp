
#include <iostream>
using namespace std;

#include "Persoon.h"
#include "Docent.h"
#include "Student.h"

int main() {
	Docent d = Docent(34, "Johan", "Duits");
	Student x = Student(34, "Johan", 3.5);

	cout << "Naam Docent: " << d.getName().c_str() << endl;
	cout << "Leeftijd: " << d.getAge() << endl;
	cout << "Gegeven vak: " << d.getVak().c_str() << endl;
	cout << "\n";
	cout << "Naam Student: " << x.getName().c_str() << endl;
	cout << "Leeftijd: " << x.getAge() << endl;
	cout << "Gemiddelde GPA: " << x.getGemGPA() << endl;

	std::cin.get();
	return 0;
}