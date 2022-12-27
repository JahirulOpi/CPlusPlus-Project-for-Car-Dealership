// Project - Jahirul Opi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
#include "Functions.h"
#include "NewCar.h"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

int main()
{
    while (true) {
        cout << "Welcome to Car Dealership!" << endl;
        cout << setw(15) << setfill('-') << "" << endl;
        cout << "Select your prefered activity from below:" << endl;
        cout << "0. Display Inventory" << endl;
        cout << "1. Search Inventory" << endl;
        cout << "2. Sell/Lease Cars" << endl;
        cout << "3. Return a Leased Car" << endl;
        cout << "4. Add Cars to Inventory" << endl;
        cout << "5. Exit" << endl;
        cout << "\nPlease Enter a Number: ";
        int InputChoice;
        cin >> InputChoice;
        switch (InputChoice) {
        case 0:
            displayInventory();
            break;
        case 1:
            Search();
            break;
        case 2:
            int sellorlease;
            cout << "\nDo you want to sell a car or lease?" << endl;
            cout << "1. Sell a car" << endl;
            cout << "2. Lease a car" << endl;
            cout << "\nPlease enter a number: ";
            cin >> sellorlease;
            if (sellorlease == 1) {
                SellCar();
            }
            else if (sellorlease == 2) {
                LeaseCar();
            }
            break;
        case 3:
            ReturnLeasedCar();
            break;
        case 4:
            AddCar();
            break;
        case 5:
            exit(1);
        default:
            cout << "\n************" << endl;
            cout << "WRONG ENTRY!" << endl;
            cout << "************\n" << endl;
            break;
        }
        cout << endl;
    }
}