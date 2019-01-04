#include <iostream>
#include "MuntDetector.h"
using namespace std;

void MuntDetector::detectMunt(BaseMunt a) {
	cout << "Ingeworpen munt: " << a.getMuntNaam().c_str() << endl;
	currentAmount += a.getWaarde();
	cout << "Saldo: " << currentAmount << "\n" << endl;
}

void MuntDetector::detectMunt(VijftigCent b) {
	cout << "Ingeworpen munt: " << b.getMuntNaam().c_str() << endl;
	currentAmount += b.getWaarde();
	cout << "Saldo: " << currentAmount << "\n" << endl;
}

void MuntDetector::detectMunt(EenEuro c) {
	cout << "Ingeworpen munt: " << c.getMuntNaam().c_str() << endl;
	currentAmount += c.getWaarde();
	cout << "Saldo: " << currentAmount << "\n" << endl;
}

void MuntDetector::detectMunt(KoffieMunt d) {
	cout << "Ingeworpen munt: " << d.getMuntNaam().c_str() << endl;
	currentAmount += d.getWaarde();
	cout << "Saldo: " << currentAmount << "\n" << endl;
}

void MuntDetector::koffieSoorten() {
	if (currentAmount >= .5) {
		cout << "Koffie standaard" << endl;
	}
	if (currentAmount >= 1) {
		cout << "Cappuccino" << endl;
	}
	if(currentAmount >= 1.5){
		cout << "Latte macchiato" << endl;
	}
}