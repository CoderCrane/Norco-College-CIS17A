#include "pch.h"
#include "TeamLeader.h"

double TeamLeader::getMonthlyBonus() {
	return this->monthlyBonus;
}

void TeamLeader::setMonthlyBonus(double newBonus) {
	this->monthlyBonus = newBonus;
}

int TeamLeader::getTrainingHours() {
	return this->trainingHours;
}

void TeamLeader::setTrainingHours(int newHours) {
	this->trainingHours = newHours;
}

TeamLeader::TeamLeader(double) {
	this->monthlyBonus;
}

TeamLeader::TeamLeader(int) {
	this->trainingHours;
}