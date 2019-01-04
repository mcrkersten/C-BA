#pragma once
#include "BaseTrein.h"

class ICE : public BaseTrein
{
public:
	ICE();
	~ICE();
	int maxPassagiers = 1000;
	float prijsPerKilometer = 0.11f;
	float toeslag = 5;
	float totaleOpbrengst(int geredenKilometer) override;
};

