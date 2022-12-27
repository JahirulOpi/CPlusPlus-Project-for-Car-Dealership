#include "NewCar.h"

string NewCar::getWarrantyProvider()
{
    return WarrantyProvider;
}

NewCar::NewCar()
{
    WarrantyProvider = " ";
}

NewCar::NewCar(string vin, string make, string model, int year, float price, string category, string warrantyprovider)
    : Car(vin, make, model, year, price, category)
{
    WarrantyProvider = warrantyprovider;
}
void NewCar::printInfo() {
    string v, v1;
    string mk, mk1;
    string md, md1;
    int y = 0, y1;
    float p = 0.0, p1;
    string c, c1;
    float mi = 0.0, mi1;
    string wp, wp1;
    ifstream inNew("NewCarInventory.txt");
    cout << "\n*************************" << endl;
    cout << "NEW CARS IN OUR INVENTORY" << endl;
    cout << "*************************\n" << endl;
    while (inNew >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        cout << v1 << " " << mk1 << " " << md1 << " " << y1 << " " << p1 << " " << c1 << " " << mi1 << " " << wp1 << endl;
    }
}


void NewCar::Search(string Strinp)
{
    ifstream inOld("NewCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (Strinp == v1 || Strinp == mk1 || Strinp == md1 || Strinp == c1 || Strinp == wp1) {
            NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
            cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void NewCar::Search(int Intinp)
{
    ifstream inOld("NewCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (Intinp == y1) {
            NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
            cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void NewCar::Search(int Intinp, int Intinp2)
{
    ifstream inOld("NewCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (Intinp <= y1 && Intinp2 >= y1) {
            NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
            cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "\n************************************************" << endl;
        cout << "OOPS! WE COULD NOT FIND ANY CAR WITH THIS INPUT!" << endl;
        cout << "************************************************\n" << endl;
    }
}

void NewCar::Search(string choice, float Fltinp)
{
    ifstream inOld("NewCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    if (choice == "PRICE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp == p1) {
                NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                    << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
                count++;
            }
        }
    }
    if (choice == "MILEAGE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp == mi1) {
                NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                    << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
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

void NewCar::Search(string choice, float Fltinp, float Fltinp2)
{
    ifstream inOld("NewCarInventory.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    if (choice == "PRICE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp <= p1 && Fltinp2 >= p1) {
                NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                    << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
                count++;
            }
        }
    }
    else if (choice == "MILEAGE") {
        while (inOld >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
            if (Fltinp <= mi1 && Fltinp2 >= mi1) {
                NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
                cout << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                    << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
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

void NewCar::SellCar(string vin)
{
    ifstream inNew;
    string path = "NewCarInventory.txt";
    inNew.open(path);
    ofstream temp("temp.txt");
    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inNew >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (vin == v1) {
            count++;
        }
        else if (vin != v1) {
            NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
            temp << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
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
    inNew.close();

    const char* pp = path.c_str();
    remove(pp);
    rename("temp.txt", pp);
}

void NewCar::LeaseCar(string vin)
{
    ifstream inNew;
    string path = "NewCarInventory.txt";
    inNew.open(path);

    ofstream temp("temp.txt");

    ofstream outLease;
    ifstream inLease;
    inLease.open("CarsOnLeaseInventory.txt");
    outLease.open("CarsOnLeaseInventory.txt", ios::app);

    string v1, mk1, md1, c1, wp1;
    int y1;
    float p1, mi1;
    int count = 0;
    while (inNew >> v1 >> mk1 >> md1 >> y1 >> p1 >> c1 >> mi1 >> wp1) {
        if (vin == v1) {
            NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
            if (inLease.is_open()) {
                outLease << endl << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                    << " " << 0.0 << " " << newcar2.getWarrantyProvider() << " " << endl;
                inLease.close();
                outLease.close();
            }
            count++;
        }

        else if (vin != v1) {
            NewCar newcar2(v1, mk1, md1, y1, p1, c1, wp1);
            temp << newcar2.getVIN() << " " << newcar2.getMake() << " " << newcar2.getModel() << " " << newcar2.getYear() << " " << newcar2.getPrice() << " " << newcar2.getCategory()
                << " " << 0.0 << " " << newcar2.getWarrantyProvider() << endl;
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
    inNew.close();


    const char* pp = path.c_str();
    remove(pp);
    rename("temp.txt", pp);

}


void NewCar::AddCar(string v, string mk, string md, int y, float p, string c, float mi, string wp)
{
    ofstream outAdd;
    ifstream inAdd;
    inAdd.open("NewCarInventory.txt");
    outAdd.open("NewCarInventory.txt", ios::app);
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
