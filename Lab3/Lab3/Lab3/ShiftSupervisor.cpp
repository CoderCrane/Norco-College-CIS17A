#include "pch.h"
#include "ShiftSupervisor.h"

double ShiftSupervisor::getSalary() {
	return this->salary;
}

void ShiftSupervisor::setSalary(double newSalary) {
	this->salary = newSalary;
}

double ShiftSupervisor::getYearlyBonus() {
	return this->yearlyBonus;
}

void ShiftSupervisor::setYearlyBonus(double newYearlyBonus) {
	this->yearlyBonus = newYearlyBonus;
}

ShiftSupervisor::ShiftSupervisor(double) {
	this->yearlyBonus;
}