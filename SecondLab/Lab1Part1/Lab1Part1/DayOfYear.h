#ifndef DAY_OF_YEAH_H
#define DAY_OF_YEAR_H
#include "pch.h"

#include "Month.h"

class DayOfYear {
private: 
	const static int NUM_OF_MONTHS = 12;
	int dayOfYear;
	Month *months;

public: 
	DayOfYear(int dayOfYear);
	std::string print();
};

#endif
