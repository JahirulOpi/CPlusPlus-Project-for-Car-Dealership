#include "Functions.h"
#include "NewCar.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

/***************************************************
DISPLAY INVENTORY
****************************************************/

void displayInventory() {
    OldCar oldprint;
    NewCar newprint;
    cout << "\nChoose which inventory do you want to see." << endl;
    cout << "1. New Cars Inventory" << endl;
    cout << "2. Old Cars Inventory" << endl;
    cout << "3. Complete Inventory" << endl;
    cout << "\nPlease enter a number: ";
    int displayoption;
    cin >> displayoption;
    if (displayoption == 1) {
        newprint.printInfo();
    }
    else if (displayoption == 2) {
        oldprint.printInfo();
    }
    else if (displayoption == 3) {
        newprint.Car::printInfo();
    }
}

/***************************************************
SEARCH INVENTORY
****************************************************/
void Search()
{
    int neworoldsearch;
    cout << "\nAre you search a new or an old car? " << endl;
    cout << "1. New Car" << endl;
    cout << "2. Old Car" << endl;
    cout << "\nPlease Enter a Number: ";
    cin >> neworoldsearch;
    if (neworoldsearch == 1) {
        NewCar newcar;
        cout << "\nHow would you like to search for a car?" << endl;
        cout << "1. Search by VIN" << endl;
        cout << "2. Search by Make" << endl;
        cout << "3. Search by Model" << endl;
        cout << "4. Search by Year" << endl;
        cout << "5. Search by Price" << endl;
        cout << "6. Search by Category" << endl;
        cout << "7. Search by Mileage" << endl;
        cout << "8. Search by Warranty Provider" << endl;
        int SearchEntry;
        cout << "\nPlease Enter a Number: ";
        cin >> SearchEntry;
        string v, mk, md, c, wp;
        int y;
        float p, mi;
        switch (SearchEntry) {
        case 1:
            cout << "\nPlease Enter VIN: ";
            cin >> v;
            transform(v.begin(), v.end(), v.begin(), ::toupper);
            newcar.Search(v);
            break;
        case 2:
            cout << "\nPlease Enter Make: ";
            cin >> mk;
            transform(mk.begin(), mk.end(), mk.begin(), ::toupper);
            newcar.Search(mk);
            break;
        case 3:
            cout << "\nPlease Enter Model: ";
            cin >> md;
            transform(md.begin(), md.end(), md.begin(), ::toupper);
            newcar.Search(md);
            break;
        case 4:
            int yearoption;
            cout << "\nHow do you want to search a car by year?" << endl;
            cout << "1. By specific year" << endl;
            cout << "2. By year range" << endl;
            cout << "\nPlease Enter a number: ";
            cin >> yearoption;
            if (yearoption == 1) {
                cout << "\nEnter the year: ";
                cin >> y;
                newcar.Search(y);
            }
            else if (yearoption == 2) {
                int lowyr, highyr;
                cout << "\nEnter the lowest year: ";
                cin >> lowyr;
                cout << "Enter the highest year: ";
                cin >> highyr;
                newcar.Search(lowyr, highyr);
            }
            break;
        case 5:
            int priceoption;
            cout << "\nHow do you want to search a car by price?" << endl;
            cout << "1. By specific price" << endl;
            cout << "2. By price range" << endl;
            cout << "\nPlease Enter a number: ";
            cin >> priceoption;
            if (priceoption == 1) {
                cout << "\nEnter The Price: ";
                cin >> p;
                newcar.Search("PRICE", p);
            }
            else if (priceoption == 2) {
                float lowp, highp;
                cout << "\nEnter the lowest price: ";
                cin >> lowp;
                cout << "Enter the highest price: ";
                cin >> highp;
                newcar.Search("PRICE", lowp, highp);
            }
            break;
        case 6:
            cout << "\nPLease Enter Category: ";
            cin >> c;
            transform(c.begin(), c.end(), c.begin(), ::toupper);
            newcar.Search(c);
            break;
        case 7:
            int mileageoption;
            cout << "\nHow do you want to search a car by mileage?" << endl;
            cout << "1. By specific mileage" << endl;
            cout << "2. By mileage range" << endl;
            cout << "\nPlease Enter a number: ";
            cin >> mileageoption;
            if (mileageoption == 1) {
                cout << "\nPlease Enter 0.0 in Mileage for new car: ";
                cin >> mi;
                newcar.Search("MILEAGE", mi);
            }
            else if (mileageoption == 2) {
                float lowmi, highmi;
                cout << "\nEnter the lowest mileage: ";
                cin >> lowmi;
                cout << "Enter the highest mileage: ";
                cin >> highmi;
                newcar.Search("MILEAGE", lowmi, highmi);
            }
            break;
        case 8:
            cout << "\nPlease Enter Warranty Provider: ";
            cin >> wp;
            transform(wp.begin(), wp.end(), wp.begin(), ::toupper);
            newcar.Search(wp);
            break;
        }
    }

    else if (neworoldsearch == 2) {
        OldCar oldcar;
        cout << "\nHow would you like to search for a car?" << endl;
        cout << "1. Search by VIN" << endl;
        cout << "2. Search by Make" << endl;
        cout << "3. Search by Model" << endl;
        cout << "4. Search by Year" << endl;
        cout << "5. Search by Price" << endl;
        cout << "6. Search by Category" << endl;
        cout << "7. Search by Mileage" << endl;
        cout << "8. Search by Warranty Provider" << endl;
        int SearchEntry;
        cout << "\nPlease Enter a Number: ";
        cin >> SearchEntry;
        string v, mk, md, c, wp;
        int y;
        float p, mi;
        switch (SearchEntry) {
        case 1:
            cout << "\nPlease Enter VIN: ";
            cin >> v;
            transform(v.begin(), v.end(), v.begin(), ::toupper);
            oldcar.Search(v);
            break;
        case 2:
            cout << "\nPlease Enter Make: ";
            cin >> mk;
            transform(mk.begin(), mk.end(), mk.begin(), ::toupper);
            oldcar.Search(mk);
            break;
        case 3:
            cout << "\nPlease Enter Model: ";
            cin >> md;
            transform(md.begin(), md.end(), md.begin(), ::toupper);
            oldcar.Search(md);
            break;
        case 4:
            int yearoption;
            cout << "\nHow do you want to search a car by year?" << endl;
            cout << "1. By specific year" << endl;
            cout << "2. By year range" << endl;
            cout << "\nPlease Enter a number: ";
            cin >> yearoption;
            if (yearoption == 1) {
                cout << "\nEnter the year: ";
                cin >> y;
                oldcar.Search(y);
            }
            else if (yearoption == 2) {
                int lowyr, highyr;
                cout << "\nEnter the lowest year: ";
                cin >> lowyr;
                cout << "Enter the highest year: ";
                cin >> highyr;
                oldcar.Search(lowyr, highyr);
            }
            break;
        case 5:
            int priceoption;
            cout << "\nHow do you want to search a car by price?" << endl;
            cout << "1. By specific price" << endl;
            cout << "2. By price range" << endl;
            cout << "\nPlease Enter a number: ";
            cin >> priceoption;
            if (priceoption == 1) {
                cout << "\nEnter The Price: ";
                cin >> p;
                oldcar.Search("PRICE", p);
            }
            else if (priceoption == 2) {
                float lowp, highp;
                cout << "\nEnter the lowest price: ";
                cin >> lowp;
                cout << "Enter the highest price: ";
                cin >> highp;
                oldcar.Search("PRICE", lowp, highp);
            }
            break;
        case 6:
            cout << "\nPLease Enter Category: ";
            cin >> c;
            transform(c.begin(), c.end(), c.begin(), ::toupper);
            oldcar.Search(c);
            break;
        case 7:
            int mileageoption;
            cout << "\nHow do you want to search a car by mileage?" << endl;
            cout << "1. By specific mileage" << endl;
            cout << "2. By mileage range" << endl;
            cout << "\nPlease Enter a number: ";
            cin >> mileageoption;
            if (mileageoption == 1) {
                cout << "\nEnter The Mileage: ";
                cin >> mi;
                oldcar.Search("MILEAGE", mi);
            }
            else if (mileageoption == 2) {
                float lowmi, highmi;
                cout << "\nEnter the lowest mileage: ";
                cin >> lowmi;
                cout << "Enter the highest mileage: ";
                cin >> highmi;
                oldcar.Search("MILEAGE", lowmi, highmi);
            }
            break;
        case 8:
            cout << "\nPlease Enter NA in Warranty Provider for old car: ";
            cin >> wp;
            transform(wp.begin(), wp.end(), wp.begin(), ::toupper);
            oldcar.Search(wp);
            break;
        }
    } //end if 1
}

void SellCar()
{
    int selloption;
    string v;
    cout << "\nAre you selling a new or an old car?" << endl;
    cout << "1. New Car" << endl;
    cout << "2. Old Car" << endl;
    cout << "\nPlease enter a number: ";
    cin >> selloption;
    NewCar newsell;
    OldCar oldsell;
    switch (selloption) {
    case 1:
        cout << "\nPlease Enter VIN: ";
        cin >> v;
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        newsell.SellCar(v);
        break;
    case 2:
        cout << "\nPlease Enter VIN: ";
        cin >> v;
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        oldsell.SellCar(v);
        break;

    }
}

void LeaseCar()
{
    int leaseoption;
    string v;
    cout << "\nAre you selling a new or an old car?" << endl;
    cout << "1. New Car" << endl;
    cout << "2. Old Car" << endl;
    cout << "\nPlease enter a number: ";
    cin >> leaseoption;
    NewCar newlease;
    OldCar oldlease;
    switch (leaseoption) {
    case 1:
        cout << "\nPlease Enter VIN: ";
        cin >> v;
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        newlease.LeaseCar(v);
        break;
    case 2:
        cout << "\nPlease Enter VIN: ";
        cin >> v;
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        oldlease.LeaseCar(v);
        break;

    }
}

void ReturnLeasedCar() {
    ifstream CarsOnLeaseInventory;
    string path = "CarsOnLeaseInventory.txt";
    CarsOnLeaseInventory.open(path);

    ofstream temp("temp.txt");

    ofstream outReturn;
    ifstream inReturn;
    inReturn.open("OldCarInventory.txt");
    outReturn.open("OldCarInventory.txt", ios::in | ios::out | ios::ate); // ios::app);

    string v, v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi, mi1;
    int count = 0;

    cout << "\nEnter VIN: ";
    cin >> v;
    transform(v.begin(), v.end(), v.begin(), ::toupper);
    cout << "Enter Current Mileage: ";
    cin >> mi;

    while (CarsOnLeaseInventory >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {

        if (inReturn.is_open()) {
            if (v == v1) {
                if (mi <= mi1) {
                    cout << "\n*****************************************************************" << endl;
                    cout << "WRONG ENTRY! CURRENT MILEAGE MUST BE HIGHER THAN PREVIOUS RECORD!" << endl;
                    cout << "*****************************************************************\n" << endl;
                    OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                    NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                    temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                        << " " << oldcar2.getMileage() << " " << newcar2.getWarrantyProvider() << endl;
                    count++;
                }
                else {
                    OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                    NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                    outReturn << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                        << " " << mi << " " << newcar2.getWarrantyProvider() << endl;
                    /*inReturn.close();
                    outReturn.close();*/
                    count++;
                    cout << "\n**************************" << endl;
                    cout << "CAR RETURNED SUCCESSFULLY!" << endl;
                    cout << "**************************\n" << endl;
                }
            }

            else {
                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                /*temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << newcar2.getWarrantyProvider() << endl;*/
                temp << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << newcar2.getWarrantyProvider() << endl;
                /*temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << "NA" << endl;*/
            }
        }
    }
    if (count == 0) {
        cout << "\n********************************************************************************" << endl;
        cout << "WRONG ENTRY! VIN MUST MATCH AND MILEAGE MUST BE HIGHER THAN THE PREVIOUS RECORD!" << endl;
        cout << "********************************************************************************\n" << endl;
    }



    temp.close();
    outReturn.close();
    CarsOnLeaseInventory.close();


    const char* pp = path.c_str();
    remove(pp);
    rename("temp.txt", pp);
}


void AddCar()
{
    cout << "\nAre you adding a new or an old car?" << endl;
    cout << "1. New Car" << endl;
    cout << "2. Old Car" << endl;
    cout << "\nPlease Enter a number: ";
    int addnewold;
    cin >> addnewold;
    if (addnewold == 1) {
        NewCar addnew;
        ifstream inOld("OldCarInventory.txt");
        ifstream inNew("NewCarInventory.txt");
        string v, v1, mk, mk1, md, md1, c, c1, wp, wp1;
        int y, y1;
        float p, p1, mi, mi1;
        cout << "\nEnter VIN: ";
        cin >> v;
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1 || inNew >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (v == v1) {
                cout << "\n*******************" << endl;
                cout << "CAR ALREADY EXISTS!" << endl;
                cout << "*******************\n" << endl;
                exit(1);
            }
        }
        cout << "Enter Make: ";
        cin >> mk;
        transform(mk.begin(), mk.end(), mk.begin(), ::toupper);
        cout << "Enter Model: ";
        cin >> md;
        transform(md.begin(), md.end(), md.begin(), ::toupper);
        cout << "Enter Year: ";
        cin >> y;
        cout << "Enter Price: ";
        cin >> p;
        cout << "Enter Category: ";
        cin >> c;
        transform(c.begin(), c.end(), c.begin(), ::toupper);
        cout << "Mileage for new car is 0.0 by default" << endl;
        mi = 0.0;
        cout << "Enter Warranty Provider: ";
        cin >> wp;
        addnew.AddCar(v, mk, md, y, p, c, mi, wp);
    }
    else if (addnewold == 2) {
        OldCar addold;
        ifstream inOld("OldCarInventory.txt");
        ifstream inNew("NewCarInventory.txt");
        string v, v1, mk, mk1, md, md1, c, c1, wp, wp1;
        int y, y1;
        float p, p1, mi, mi1;
        cout << "\nEnter VIN: ";
        cin >> v;
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1 || inNew >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (v == v1) {
                cout << "\n*******************" << endl;
                cout << "CAR ALREADY EXISTS!" << endl;
                cout << "*******************\n" << endl;
                exit(1);
            }
        }
        cout << "Enter Make: ";
        cin >> mk;
        transform(mk.begin(), mk.end(), mk.begin(), ::toupper);
        cout << "Enter Model: ";
        cin >> md;
        transform(md.begin(), md.end(), md.begin(), ::toupper);
        cout << "Enter Year: ";
        cin >> y;
        cout << "Enter Price: ";
        cin >> p;
        cout << "Enter Category: ";
        cin >> c;
        transform(c.begin(), c.end(), c.begin(), ::toupper);
        cout << "Enter Mileage: ";
        cin >> mi;
        cout << "Warranty provider for old car is not applicable!" << endl;
        wp = "NA";
        addold.AddCar(v, mk, md, y, p, c, mi, wp);
    }
}
