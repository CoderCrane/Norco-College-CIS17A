#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>
#include <iostream>

class DayOfYear {
public:
	//Default Constructor
	DayOfYear();

	//Overload Constructor
	DayOfYear(std::string, int);

	//Destructor
	~DayOfYear();

	//Accessor functions
	int getDay() const;
		//getDay - gets the day of the year;
	std::string getMonth() const;
		//getMonth - returns name of month;

private:
	//Member variables
	int newDay;
	std::string newMonth;

};

#endif