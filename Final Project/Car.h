#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Car
{
private:
	string VIN;
	string Make;
	string Model;
	int Year;
	float Price;
	string Category;

public:
	string getVIN();
	string getMake();
	string getModel();
	int getYear();
	float getPrice();
	string getCategory();
	Car();
	Car(string vin, string make, string model, int year, float price, string category);
	virtual void printInfo();

};

