#pragma once
#include <iostream>
#include "BaseMunt.h"
using namespace std;

class VijftigCent : public BaseMunt {

public:
	float getWaarde() override;
	string getMuntNaam() override;
};