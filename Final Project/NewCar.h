#pragma once
#include "OldCar.h"
class NewCar :
    public Car
{
private:
    string WarrantyProvider;
public:
    string getWarrantyProvider();
    NewCar();
    NewCar(string vin, string make, string model, int year, float price, string category, string warrantyprovider);
    void printInfo();
    void Search(string Strinp);
    void Search(int Intinp);
    void Search(int Intinp, int Intinp2);
    void Search(string choice, float Fltinp);
    void Search(string choice, float Fltinp, float Fltinp2);
    void SellCar(string vin);
    void LeaseCar(string vin);
    void AddCar(string v, string mk, string md, int y, float p, string c, float mi, string wp);
};

