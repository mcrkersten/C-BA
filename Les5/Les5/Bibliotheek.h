#pragma once
#include <vector>
#include "Book.h"

class Bibliotheek
{
public:
	//const
	Bibliotheek();
	//dest
	~Bibliotheek();

	void returnBook(std::string title);
	void leenBoek(std::string title);
	Book* returnPointerBook(std::string title);

private:
	std::vector<Book*> boekenBeschikbaar;
	std::vector<Book*> boekenUitgeleend;
};

