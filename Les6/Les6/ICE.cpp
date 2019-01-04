#include "ICE.h"



ICE::ICE()
{
}


ICE::~ICE()
{
}

float ICE::totaleOpbrengst(int geredenKilometer) {
	return (maxPassagiers * toeslag) + (maxPassagiers * prijsPerKilometer * geredenKilometer);
}