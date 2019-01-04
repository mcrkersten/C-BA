#include "SnelTrein.h"
#include "ICE.h"
#include <iostream>

int main() {

	SnelTrein sneltrein = SnelTrein();
	ICE ice = ICE();

	std::cout << sneltrein.totaleOpbrengst(50) << std::endl;
	std::cout << ice.totaleOpbrengst(50) << std::endl;

	std::cin.get();
	return 0;
}