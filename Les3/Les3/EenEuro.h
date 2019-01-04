#pragma once
#include <iostream>
#include "BaseMunt.h"
using namespace std;

class EenEuro : public BaseMunt {

public:
	float getWaarde() override;
	string getMuntNaam() override;
};