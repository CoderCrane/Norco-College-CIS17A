#ifndef SHIFT_SUPERVISOR_H
#define SHIFT_SUPERVISOR_H
#include "pch.h"
#include "Employee.h"

class ShiftSupervisor { // : public Employee
private:

public:
	double salary;
	double yearlyBonus;

	ShiftSupervisor(double);
	double getSalary();
	double getYearlyBonus();

	void setSalary(double newSalary);
	void setYearlyBonus(double newYearlyBonus);
};

#endif
