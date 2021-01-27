#include "pch.h"
#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

int main()
{
	//part 1
	//Employee name
	Employee a(0);
	a.setName("Robert");
	std::cout << "Part 1:\nEmployee 1 name: " << a.getName() << std::endl;

	//Employee number
	Employee a2(0);
	a2.setNum(1);
	std::cout << "Employee 1 ID: " << a2.getNum() << std::endl;

	//First ProductionWorker, on day shift.
	ProductionWorker b(1);
	ProductionWorker b2(0.0);
	b.setShift(1);
	b2.setHourlyRate(13.5);
    std::cout << "\nProduction Worker 1 Shift: " << b.getShift() << std::endl;
	std::cout << "Production Worker 1 hourly wage: " << b2.getHourlyRate() << std::endl;

	//Second ProductionWorker, on night shift.
	b.setShift(2);
	b2.setHourlyRate(14.7);
	std::cout << "\nProduction Worker 2 Shift: " << b.getShift() << std::endl;
	std::cout << "Production Worker 2 hourly wage: " << b2.getHourlyRate() << std::endl;

	//part 2
	//Shift Supervisor salary and yearly bonus.
	ShiftSupervisor c(0.0);
	ShiftSupervisor c2(0.0);
	c.setSalary(25.5);
	c2.setYearlyBonus(50.0);
	std::cout << "\nPart 2:\nShift Supervisor Salary: " << c.getSalary() << std::endl;
	std::cout << "Shift Supervisor yearly bonus: " << c2.getYearlyBonus() << std::endl;

	//part 3
	//Team leader hourly pay, fixed monthly bonus, req. hours, attended hours.
	TeamLeader d(0.0);
	TeamLeader d2(0);
	c.setSalary(32.3);
	d.setMonthlyBonus(75.5);
	d2.setTrainingHours(48);
	std::cout << "\nPart 3:\nTeamLeader hourly pay: " << c.getSalary() << std::endl;
	std::cout << "TeamLeader fixed monthly bonus: " << d.getMonthlyBonus() << std::endl;
	std::cout << "TeamLeader required training hours: " << d2.getTrainingHours() << std::endl;
	d2.setTrainingHours(32);
	std::cout << "TeamLeader attended hours: " << d2.getTrainingHours() << std::endl;

 
}