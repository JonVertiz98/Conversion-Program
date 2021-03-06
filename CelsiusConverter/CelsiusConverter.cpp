//	Name: Jonathan Vertiz
//	ITSE 1307
//	Conversion Program
//	ConversionProgram.cpp : Program to convert Celsius to Fahrenheit

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//We initialize the variables we'll need for the program
	double doubleFahrenheit = 0.0;
	int intCelsius = 0;

	//Tell the user to input a degree to convert
	cout << "Please enter degrees in Celsius: ";
	cin >> intCelsius;
	
	//The equation that we use to convert Celsius to Fahrenheit
	doubleFahrenheit = intCelsius * 1.8 + 32;

	//Displays your degree in Fahrenheit
	cout << "your degrees in Fahrenheit is: " << doubleFahrenheit << endl;
	return 0;
}

