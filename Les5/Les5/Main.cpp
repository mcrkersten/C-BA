#include <iostream>
#include"Bibliotheek.h"


int main() {

	Bibliotheek biep;

	biep.leenBoek("boek");
	biep.returnBook("boek");

	std::cin.get();
	return 0;
}