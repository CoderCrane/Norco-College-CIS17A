#include "pch.h"
#include "Employee.h"

std::string Employee::getName() {
	return this->employeeName;
}

int Employee::getNum() {
	return this->employeeNumber;
}

void Employee::setName(std::string newName) {
	this->employeeName = newName;
}

void Employee::setNum(int newNumber) {
	this->employeeNumber = newNumber;
}

Employee::Employee(int employeeNumber) {
this->employeeNumber = employeeNumber;
}

