/*
 * SpeedCalculator.h
 *
 *  Created on: Jun 1, 2020
 *      Author: student
 */

#ifndef SRC_SPEEDCALCULATOR_H_
#define SRC_SPEEDCALCULATOR_H_

class SpeedCalculator {
private:
	int numEntries;
	double *positions;
	double *timesInSeconds;
	double *speeds;
public:
	void initializeData(int numEntries);
	void calculateAndPrintSpeedData();
};

#endif /* SRC_SPEEDCALCULATOR_H_ */
