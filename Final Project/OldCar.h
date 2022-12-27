#pragma once
#include "Car.h"
class OldCar :
    public Car
{
private:
    float Mileage;
public:
    float getMileage();
    OldCar();
    OldCar(string vin, string make, string model, int year, float price, string category, float mileage);
    void printInfo();
    void Search(string Strinp);
    void Search(int Intinp);
    void Search(int Intinp, int Intinp2);
    void Search(string choice, float Fltinp);
    void Search(string choice, float Fltinp, float Fltinp2);
    void SellCar(string vin);
    void LeaseCar(string vin);
    //void ReturnLeasedCar(string vin, float mileage);
    void AddCar(string v, string mk, string md, int y, float p, string c, float mi, string wp);
};
