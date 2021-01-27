#include "pch.h"
#include "ProductionWorker.h"

int ProductionWorker::getShift() {
	return this->shiftTime;
}

void ProductionWorker::setShift(int newShift) {
	this->shiftTime = newShift;
}

double ProductionWorker::getHourlyRate() {
	return this->hourlyRate;
}

void ProductionWorker::setHourlyRate(double newRate) {
	this->hourlyRate = newRate;
}

ProductionWorker::ProductionWorker(int) {
	this->shiftTime;
}