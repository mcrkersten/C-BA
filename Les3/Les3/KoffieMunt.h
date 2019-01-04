#pragma once
#pragma once
#include <iostream>
#include "BaseMunt.h"
using namespace std;

class KoffieMunt : public BaseMunt {

public:
	float getWaarde() override;
	string getMuntNaam() override;
};