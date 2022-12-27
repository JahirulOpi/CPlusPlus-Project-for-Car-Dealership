#include "Car.h"

string Car::getVIN()
{
    return VIN;
}

string Car::getMake()
{
    return Make;
}

string Car::getModel()
{
    return Model;
}

int Car::getYear()
{
    return Year;
}

float Car::getPrice()
{
    return Price;
}

string Car::getCategory()
{
    return Category;
}

Car::Car()
{
    VIN = " ";
    Make = " ";
    Model = " ";
    Year = 0;
    Price = 0.0;
    Category = " ";
}

Car::Car(string vin, string make, string model, int year, float price, string category)
{
    VIN = vin;
    Make = make;
    Model = model;
    Year = year;
    Price = price;
    Category = category;
}

void Car::printInfo() {
    string v, v1;
    string mk, mk1;
    string md, md1;
    int y = 0, y1;
    float p = 0.0, p1;
    string c, c1;
    float mi = 0.0, mi1;
    string wp, wp1;
    ifstream inOld("OldCarInventory.txt");
    ifstream inNew("NewCarInventory.txt");
    cout << "\n*************************" << endl;
    cout << "NEW CARS IN OUR INVENTORY" << endl;
    cout << "*************************\n" << endl;
    while (inNew >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        cout << v1 << " " << mk1 << " " << md1 << " " << y1 << " " << p1 << " " << c1 << " " << mi1 << " " << wp1 << endl;
    }
    cout << "\n*************************" << endl;
    cout << "OLD CARS IN OUR INVENTORY" << endl;
    cout << "*************************\n" << endl;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        cout << v1 << " " << mk1 << " " << md1 << " " << y1 << " " << p1 << " " << c1 << " " << mi1 << " " << wp1 << endl;
    }
}