#include "OldCar.h"
#include <fstream>

float OldCar::getMileage()
{
    return Mileage;
}

OldCar::OldCar()
{
    Mileage = 0.0;
}
OldCar::OldCar(string vin, string make, string model, int year, float price, string category, float mileage) :
    Car(vin, make, model, year, price, category)
{
    Mileage = mileage;
}

void OldCar::printInfo() {
    string v, v1;
    string mk, mk1;
    string md, md1;
    int y = 0, y1;
    float p = 0.0, p1;
    string c, c1;
    float mi = 0.0, mi1;
    string wp, wp1;
    ifstream inOld("OldCarInventory.txt");
    cout << "\n*************************" << endl;
    cout << "OLD CARS IN OUR INVENTORY" << endl;
    cout << "*************************\n" << endl;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        cout << v1 << " " << mk1 << " " << md1 << " " << y1 << " " << p1 << " " << c1 << " " << mi1 << " " << wp1 << endl;
    }
}

void OldCar::Search(string Strinp)
{
    ifstream inOld("OldCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (Strinp == v1 || Strinp == mk1 || Strinp == md1 || Strinp == c1 || Strinp == wp1) {
            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
            cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                << " " << oldcar2.getMileage() << " " << "NA" << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void OldCar::Search(int Intinp)
{
    ifstream inOld("OldCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (Intinp == y1) {
            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
            cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                << " " << oldcar2.getMileage() << " " << "NA" << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void OldCar::Search(int Intinp, int Intinp2)
{
    ifstream inOld("OldCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (Intinp <= y1 && Intinp2 >= y1) {
            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
            cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                << " " << oldcar2.getMileage() << " " << "NA" << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void OldCar::Search(string choice, float Fltinp)
{
    ifstream inOld("OldCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    if (choice == "PRICE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp == p1) {
                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
                count++;
            }
        }
    }
    if (choice == "MILEAGE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp == mi1) {
                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void OldCar::Search(string choice, float Fltinp, float Fltinp2)
{
    ifstream inOld("OldCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    if (choice == "PRICE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp <= p1 && Fltinp2 >= p1) {
                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
                count++;
            }
        }
    }
    else if (choice == "MILEAGE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp <= mi1 && Fltinp2 >= mi1) {
                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
                cout << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void OldCar::SellCar(string vin)
{
    ifstream inOld;
    string path = "OldCarInventory.txt";
    inOld.open(path);
    ofstream temp("temp.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (vin == v1) {
            count++;
        }
        else if (vin != v1) {
            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
            temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                << " " << oldcar2.getMileage() << " " << "NA" << endl;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
    else {
        cout << "\n***************************************" << endl;
        cout << "CONGRATULATIONS! CAR SOLD SUCCESSFULLY!" << endl;
        cout << "***************************************\n" << endl;
    }

    temp.close();
    inOld.close();

    const char* pp = path.c_str();
    remove(pp);
    rename("temp.txt", pp);
}

void OldCar::LeaseCar(string vin)
{
    ifstream inOld;
    string path = "OldCarInventory.txt";
    inOld.open(path);

    ofstream temp("temp.txt");

    ofstream outLease;
    ifstream inLease;
    inLease.open("CarsOnLeaseInventory.txt");
    outLease.open("CarsOnLeaseInventory.txt", ios::app);

    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (vin == v1) {
            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
            if (inLease.is_open()) {
                outLease << endl << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
                inLease.close();
                outLease.close();
            }
            count++;
        }

        else if (vin != v1) {
            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
            temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
                << " " << oldcar2.getMileage() << " " << "NA" << endl;
        }
    }

    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
    else {
        cout << "\n*****************************************" << endl;
        cout << "CONGRATULATIONS! CAR LEASED SUCCESSFULLY!" << endl;
        cout << "*****************************************\n" << endl;
    }
    temp.close();
    inOld.close();


    const char* pp = path.c_str();
    remove(pp);
    rename("temp.txt", pp);
}

//void OldCar::ReturnLeasedCar(string vin, float mileage)
//{
//    ifstream CarsOnLeaseInventory;
//    string path = "CarsOnLeaseInventory.txt";
//    CarsOnLeaseInventory.open(path);
//
//    ofstream temp("temp.txt");
//
//    ofstream outReturn;
//    ifstream inReturn;
//    inReturn.open("OldCarInventory.txt");
//    outReturn.open("OldCarInventory.txt", ios::app);
//
//    string v1, mk1, md1, c1, wp1;
//    int y1;
//    float p1, mi1;
//    int count = 0;
//    while (CarsOnLeaseInventory >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
//        if (vin == v1) {
//            OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//            if (inReturn.is_open()) {
//                {
//                    /*outReturn << endl << getVIN() << " " << getMake() << " " << getModel() << " " << getYear() << " " << getPrice() << " " << getCategory()
//                        << " " << getMileage() << " " << "NA" << endl;*/
//                    outReturn << endl << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                        << " " << oldcar2.getMileage() << " " << "NA" << endl;
//                    inReturn.close();
//                    outReturn.close();
//                }
//                count++;
//            }
//        }
//            else if (vin != v1) {
//                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                temp << getVIN() << " " << getMake() << " " << getModel() << " " << getYear() << " " << getPrice() << " " << getCategory()
//                    << " " << getMileage() << " " << "NA" << endl;
//                temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
//            }
//        
//    }
//                if (count == 0) {
//                    cout << "\n************************************************" << endl;
//                    cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
//                    cout << "************************************************\n" << endl;
//                }
//                else {
//                    cout << "\n********************************" << endl;
//                    cout << "CAR RETURED TO OLD CAR INVENTORY" << endl;
//                    cout << "********************************\n" << endl;
//                }
//                temp.close();
//                CarsOnLeaseInventory.close();
//
//                const char* pp = path.c_str();
//                remove(pp);
//                rename("temp.txt", pp);
//
//        }

//void OldCar::ReturnLeasedCar(string vin, float mileage) {
//    ifstream CarsOnLeaseInventory;
//    string path = "CarsOnLeaseInventory.txt";
//    CarsOnLeaseInventory.open(path);
//    string v1, mk1, md1, c1, wp1;
//    int y1;
//    float p1, mi1;
//    int count = 0;
//    ofstream temp("temp.txt", ios::in | ios::out | ios::ate);
//    //ofstream outReturn;
//        /*ifstream inReturn;
//        inReturn.open("OldCarInventory.txt");*/
//    ofstream outReturn("OldCarInventory.txt", ios::in | ios::out | ios::ate); //ios::app);
//
//    while (CarsOnLeaseInventory >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
//        if (vin == v1) {
//            cout << "CAR EXISTS!" << endl;
//        }
//        else
//            count = 1;
//    }
//    CarsOnLeaseInventory.close();
//    if (count == 0) {
//        while (CarsOnLeaseInventory >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
//            if (vin == v1 && mileage > mi1) {
//                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                outReturn << endl << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                    << " " << mileage << " " << "NA" << endl;
//            }
//            else {
//                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                    << " " << oldcar2.getMileage() << " " << "NA" << endl;
//            }
//        }
//    }
//    temp.close();
//    outReturn.close();
//    CarsOnLeaseInventory.close();
//    const char* pp = path.c_str();
//    remove(pp);
//    rename("temp.txt", pp);
//}


//void OldCar::ReturnLeasedCar(string vin, float mileage)
//{
//    ifstream CarsOnLeaseInventory;
//    string path = "CarsOnLeaseInventory.txt";
//    CarsOnLeaseInventory.open(path);
//
//    ofstream temp("temp.txt", ios::in | ios::out | ios::ate);
//
//    ofstream outReturn;
//    ifstream inReturn;
//    inReturn.open("OldCarInventory.txt");
//    outReturn.open("OldCarInventory.txt", ios::in | ios::out | ios::ate); //ios::app);
//
//    string v1, mk1, md1, c1, wp1;
//    int y1;
//    float p1, mi1;
//    int count = 0;
//    while (CarsOnLeaseInventory >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
//
//       if (inReturn.is_open()) {
//            
//
//            //if (vin == v1 && mileage <= mi1) {
//            //    cout << "\n*****************************************************************" << endl;
//            //    cout << "WRONG ENTRY! CURRENT MILEAGE MUST BE HIGHER THAN PREVIOUS RECORD!" << endl;
//            //    cout << "*****************************************************************\n" << endl;
//            //    OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//            //    temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//            //        << " " << oldcar2.getMileage() << " " << "NA" << endl;
//            //    //inReturn.close();
//            //    //outReturn.close();
//            //    count++;
//            //}
//
//            if (mileage > mi1) {
//                if (vin == v1) {
//                    // if (mi > mi1) {
//                    OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                    outReturn << endl << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                        << " " << mileage << " " << "NA" << endl;
//                    inReturn.close();
//                    outReturn.close();
//                    count++;
//                    cout << "\n**************************" << endl;
//                    cout << "CAR RETURNED SUCCESSFULLY!" << endl;
//                    cout << "**************************\n" << endl;
//                }
//                else if (vin != v1) {
//                    OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                    temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                        << " " << oldcar2.getMileage() << " " << "NA" << endl;
//                    //inReturn.close();
//                    //outReturn.close();
//                }
//            }
//
//            else if (mileage <= mi1) {
//                cout << "\n*****************************************************************" << endl;
//                    cout << "WRONG ENTRY! CURRENT MILEAGE MUST BE HIGHER THAN PREVIOUS RECORD!" << endl;
//                    cout << "*****************************************************************\n" << endl;
//                    /*OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                    temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                        << " " << oldcar2.getMileage() << " " << "NA" << endl;*/
//                    count++;
//            }
//            /*else if (vin != v1) {
//                OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//                temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//                    << " " << oldcar2.getMileage() << " " << "NA" << endl;*/
//                //inReturn.close();
//                //outReturn.close();
//            }
//
//        }
//            //if (vin == v1 && mileage <= mi1) {
//            //    cout << "\n*****************************************************************" << endl;
//            //    cout << "WRONG ENTRY! CURRENT MILEAGE MUST BE HIGHER THAN PREVIOUS RECORD!" << endl;
//            //    cout << "*****************************************************************\n" << endl;
//            //    /*OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//            //    temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//            //        << " " << oldcar2.getMileage() << " " << "NA" << endl;*/
//            //    count++;
//            //}
//
//            //else if (vin == v1) {
//            //    if (mileage > mi1) {
//            //        // if (mi > mi1) {
//            //        OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//            //        outReturn << endl << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//            //            << " " << mileage << " " << "NA" << endl;
//            //        inReturn.close();
//            //        outReturn.close();
//            //        count++;
//            //        cout << "\n**************************" << endl;
//            //        cout << "CAR RETURNED SUCCESSFULLY!" << endl;
//            //        cout << "**************************\n" << endl;
//            //    }
//            //    else {
//            //        OldCar oldcar2(v1, mk1, md1, y1, p1, c1, mi1);
//            //        temp << oldcar2.getVIN() << " " << oldcar2.getMake() << " " << oldcar2.getModel() << " " << oldcar2.getYear() << " " << oldcar2.getPrice() << " " << oldcar2.getCategory()
//            //            << " " << oldcar2.getMileage() << " " << "NA" << endl;
//            //    }
//
//            //}
//
//        
//        if (count == 0) {
//            cout << "\n********************************************************************************" << endl;
//            cout << "WRONG ENTRY! VIN MUST MATCH AND MILEAGE MUST BE HIGHER THAN THE PREVIOUS RECORD!" << endl << endl;
//            cout << "********************************************************************************\n" << endl;
//        }
//
//
//
//        temp.close();
//        CarsOnLeaseInventory.close();
//
//
//        const char* pp = path.c_str();
//        remove(pp);
//        rename("temp.txt", pp);
//    }

void OldCar::AddCar(string v, string mk, string md, int y, float p, string c, float mi, string wp)
{
    ofstream outAdd;
    ifstream inAdd;
    inAdd.open("OldCarInventory.txt");
    outAdd.open("OldCarInventory.txt", ios::app);
    if (inAdd.is_open()) {
        outAdd << v << " " << mk << " " << md << " " << y << " " << p << " " << c
            << " " << mi << " " << wp << endl;
        inAdd.close();
        outAdd.close();
    }
    cout << "\n***********************" << endl;
    cout << "CAR ADDED SUCCESSFULLY!" << endl;
    cout << "***********************\n" << endl;
}

