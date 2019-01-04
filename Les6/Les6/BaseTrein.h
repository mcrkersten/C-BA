#pragma once
class BaseTrein
{
public:
	int maxPasagiers = 0;
	float prijsPerKilometer = 0;
	float toeslag = 0;
	virtual float totaleOpbrengst(int geredenKilometer) = 0;
};

