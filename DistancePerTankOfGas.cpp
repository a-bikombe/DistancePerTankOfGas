/*
Student Name:  Arianna Bikombe
Date: February 4, 2021
Lab Assignment: Lab 01-Ch2Intro
Project Name: Lab01-04-DistancePerTankOfGas
Description: Calculates the tax and tip on a meal and displays results
Limitations or issues:	All the input is hard coded with no opportunity for the user to make changes.
Credits: Not Applicable
*/

#include <iostream>
using namespace std;

int main()
{
	// Print out your name and course
	cout << "Arianna Bikombe" << endl;
	cout << "CSCI175N\n" << endl;
	
	int gallons = 20;             // Tank capacity
	double townAverage = 21.5;    // Average MPG in town
	double highwayAverage = 26.8; // Average MPG on highway
	double townDistance;          // Distance in town
	double highwayDistance;       // Distance on highway
   
	cout << "This program calculates miles per gallon for a preset number of gallons.  " << endl;


	cout << endl;

	// Calculate the distance the car can drive in town.
	townDistance = gallons * townAverage;

	// Calculate the distance the car can drive on the highway
	highwayDistance = gallons * highwayAverage;
   
	// Display the distances.
	cout << "In town, the car can average a distance of\n"
	     << townDistance << " miles on a full tank.\n\n";
	cout << "On the highway, the car can average a distance of\n"
         << highwayDistance << " miles on a full tank.\n\n";

	// This code pauses the program so instructor can grade
	system("pause");

	return 0;
}

/*

Proof:

Arianna Bikombe
CSCI175N

This program calculates miles per gallon for a preset number of gallons.

In town, the car can average a distance of
430 miles on a full tank.

On the highway, the car can average a distance of
536 miles on a full tank.

Press any key to continue . . .

*/