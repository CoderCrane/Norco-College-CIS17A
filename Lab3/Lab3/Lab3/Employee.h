#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "pch.h"
#include <string>


class Employee {
protected: 
	double hourlyRate;
	int employeeNumber;
    std::string employeeName;
	std::string hireDate;
	std::string newName;

public:
	Employee(int);
	std::string getName();
	int getNum();

	void setName(std::string newName);
	void setNum(int newNumber);
};

#endif
