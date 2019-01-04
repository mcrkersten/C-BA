#pragma once
#include <string>
class Book
{
public:
	Book(std::string title);
	std::string getTitle();
	~Book();
private:
	std::string title;
};

