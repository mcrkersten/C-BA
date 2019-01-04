#pragma once
#include "BaseTrein.h"

class SnelTrein : public BaseTrein {
public:
	SnelTrein();
	~SnelTrein();
	int maxPassagiers = 1000;
	float prijsPerKilometer = 0.11f;
	float toeslag = 0;
	float totaleOpbrengst(int geredenKilometer) override;
};

