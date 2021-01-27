#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "pch.h"
#include "Employee.h"

class ProductionWorker {  // : public Employee is causing the issue, maybe something with inheritance?
public:

	int shiftTime;
	double hourlyRate;

	ProductionWorker(int);
	int getShift();
	double getHourlyRate();

	void setHourlyRate(double newRate);
	void setShift(int shiftTime);
	
};

#endif