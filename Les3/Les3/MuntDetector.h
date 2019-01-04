#pragma once

#include "BaseMunt.h"
#include "VijftigCent.h"
#include "EenEuro.h"
#include "KoffieMunt.h"

class MuntDetector {
	private:
		float currentAmount = 0;

	public:
		void detectMunt(BaseMunt a);
		void detectMunt(VijftigCent b);
		void detectMunt(EenEuro c);
		void detectMunt(KoffieMunt d);
		void koffieSoorten();
};