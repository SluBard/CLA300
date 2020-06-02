/*
 * SpeedCalculator.cpp
 *
 *  Created on: Jun 1, 2020
 *      Author: student
 */

#include "SpeedCalculator.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cassert>

void SpeedCalculator::initializeData(int numEntries) {
	this->numEntries = numEntries;
	positions = new double[numEntries];
	timesInSeconds = new double[numEntries];
	srand(time(NULL));
	timesInSeconds[0] = 0.0;
	positions[0] = 0.0;
	for (int i = 0; i < numEntries; ++i) {
		positions[i] = positions[i - 1] + (rand() % 500);
		timesInSeconds[i] = timesInSeconds[i - 1] + ((rand() % 10) + 1);
	}
}

void SpeedCalculator::calculateAndPrintSpeedData() {
	double maxSpeed = 0;
	double minSpeed = 0;
	double speedLimit = 100;
	double limitCrossDuration = 0;

	for (int i = 0; i < numEntries; ++i) {
		double dt = timesInSeconds[i + 1] - timesInSeconds[i];
		assert(dt > 0);
		double speed = (positions[i + 1] - positions[i]) / dt;
		if (maxSpeed < speed) {
			maxSpeed = speed;
		}
		if (minSpeed > speed) {
			minSpeed = speed;
		}
		if (speed > speedLimit) {
			limitCrossDuration += dt;
		}
		speeds[i] = speed;
	}
	std::cout << "Max speed: " << maxSpeed << std::endl;
	std::cout << "Min speed: " << minSpeed << std::endl;
	std::cout << "Total duration: "
			<< timesInSeconds[numEntries - 1] - timesInSeconds[0] << " seconds"
			<< std::endl;
	std::cout << "Crossed the speed limit for " << limitCrossDuration
			<< " seconds" << std::endl;
	delete[] speeds;

}

