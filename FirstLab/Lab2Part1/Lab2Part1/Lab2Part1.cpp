#include <iostream>
#include <string>
#include "DayOfYear.h"

int main()
{
	int day;
	std::string month;
	

	std::cout << "Please enter a day of the year: ";
	std::cin >> day;

	DayOfYear completeDate(month, day);

	std::cout << completeDate.getMonth() << completeDate.getDay() << " is the " << day << " of the year " << std::endl;

	
}
