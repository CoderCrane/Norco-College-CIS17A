#ifndef TEAM_LEADER_H
#define TEAM_LEADER_H
#include "ProductionWorker.h"

class TeamLeader { // : public ProductionWorker
public:
	double monthlyBonus;
	int trainingHours;

	TeamLeader(int);
	TeamLeader(double);

	double getMonthlyBonus();
	int getTrainingHours();

	void setMonthlyBonus(double newBonus);
	void setTrainingHours(int newHours);
};

#endif
