#include "SnelTrein.h"

SnelTrein::SnelTrein()
{

}

SnelTrein::~SnelTrein()
{
}

float SnelTrein::totaleOpbrengst(int geredenKilometer) {
	return maxPassagiers * geredenKilometer * prijsPerKilometer;
}
