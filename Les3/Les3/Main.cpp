#include <iostream>

#include "BaseMunt.h"
#include "VijftigCent.h"
#include "EenEuro.h"
#include "KoffieMunt.h"
#include "MuntDetector.h"

int main() {
	VijftigCent vijftigCent = VijftigCent();
	EenEuro eenEuro = EenEuro();
	KoffieMunt koffieMunt = KoffieMunt();

	MuntDetector detector;
	detector.detectMunt(koffieMunt);
	detector.koffieSoorten();

	std::cin.get();
	return 0;
}