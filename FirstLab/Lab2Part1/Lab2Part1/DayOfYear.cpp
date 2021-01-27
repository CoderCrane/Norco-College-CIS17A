#include "DayOfYear.h"

DayOfYear::DayOfYear() {
	newDay = 0;
}

DayOfYear::DayOfYear(std::string month, int day)
{
	newDay = day;
	newMonth = month;
}

DayOfYear::~DayOfYear() {

}

std::string DayOfYear::getMonth() const {
	return newMonth;
}

int DayOfYear::getDay() const {
	return newDay;
}