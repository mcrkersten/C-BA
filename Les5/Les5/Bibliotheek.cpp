#include "Bibliotheek.h"
#include <iostream>

//const
Bibliotheek::Bibliotheek() {
	returnBook("boek");
}

void Bibliotheek::returnBook(std::string title) {
	std::vector<Book*>::iterator it = boekenUitgeleend.begin();
	while (it != boekenUitgeleend.end()) {
		if ((*it)->getTitle() == title) {
			std::cout << "Boek: " << title << " terug gebracht" << std::endl;
			boekenBeschikbaar.push_back(*it);
			it = boekenUitgeleend.erase(it);
			return;
		}
	}
	std::cout << "Boek: " << title << " nieuw binnengekomen" << std::endl;
	boekenBeschikbaar.push_back(new Book(title));
}

void Bibliotheek::leenBoek(std::string title) {
	std::vector<Book*>::iterator it = boekenBeschikbaar.begin();
	while ((*it)->getTitle() == title) {
		std::cout << "Boek: " << title << " uitgeleend" << std::endl;
		boekenUitgeleend.push_back(*it);
		it = boekenBeschikbaar.erase(it);
		return;
	}
}

Book* Bibliotheek::returnPointerBook(std::string title) {
	std::vector<Book*>::iterator it = boekenBeschikbaar.begin();
	while (it != boekenBeschikbaar.end()) {
		if ((*it)->getTitle() == title) {
			return *it;
		}
		else {
			it++;
		}
	}
	return NULL;
}



//dest
Bibliotheek::~Bibliotheek() {
	std::vector<Book*>::iterator it1 = boekenBeschikbaar.begin();
	while (it1 != boekenBeschikbaar.end()) {
		delete *it1;
		it1++;
	}
	std::vector<Book*>::iterator it2 = boekenUitgeleend.begin();
	while (it2 != boekenUitgeleend.end()) {
		delete *it2;
		it2++;
	}
}
