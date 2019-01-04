#include "Book.h"



Book::Book(std::string title) : title(title) {
}

std::string Book::getTitle() {
	return title;
}

Book::~Book()
{
}
