#include "DayOfYear.h"
#include <sstream>
#include "pch.h"

DayOfYear::DayOfYear(int dayOfYear) {
	this->dayOfYear = dayOfYear;
	Month janurary("January", 31);
	Month feb("February", 28);
	Month march("March", 31);
	Month apr("April", 30);
	Month may("May", 31);
	Month jun("June", 30);
	Month july("July", 31);
	Month aug("August", 31);
	Month sep("September", 30);
	Month oct("October", 31);
	Month nov("November", 30);
	Month dec("December", 31);
	this->months[0] = janurary;
	this->months[1] = feb;
	this->months[2] = march;
	this->months[3] = apr;
	this->months[4] = may;
	this->months[5] = jun;
	this->months[6] = july;
	this->months[7] = aug;
	this->months[8] = sep;
	this->months[9] = oct;
	this->months[10] = nov;
	this->months[11] = dec;
}

std::string DayOfYear::print() {
	int numOfDaysLeft = this->dayOfYear;
	int monthCounter = 0;
	while (numOfDaysLeft > 0) {
		int daysInMonth = this->months[monthCounter].getNumOfDays();
		if (numOfDaysLeft - daysInMonth < 0) {
			std::stringstream output;
			output << this->months[monthCounter].getName() << " " << numOfDaysLeft;
			
			return output.str();
		}
		numOfDaysLeft = numOfDaysLeft - daysInMonth;
	}
}