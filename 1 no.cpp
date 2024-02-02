#include<bits/stdc++.h>
#include <string>

using namespace std;
typedef double dl;
typedef long long ll;
class Car {
public:
    string name;
    string model;
    int year;

    Car(string n, string m, int y) : name(move(n)), model(move(m)), year(y) {


    }

    void displayInfo() {
        cout << year << " " << name << " " << model << endl;
    }
};

class ElectricCar : public Car {
public:
    double batteryCapacity;

    ElectricCar(string n, string m, int y, dl b)
        : Car(move(n), move(m), y), batteryCapacity(b) {

        }

    void displayInfo() {
        Car::displayInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

class GasCar : public Car {
public:
    double fuelEfficiency;

    GasCar(string n, string m, int y, dl f)
        : Car(move(n), move(m), y), fuelEfficiency(f) {}

    void displayInfo() {
        Car::displayInfo();
        cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
    }
};

int main() {
    string carType, name, model;
    int year;

    cout << "Enter car type (Electric/Gas): ";
    cin >> carType;
 cin.ignore();
    cout << "Enter Name: ";
   getline(cin,name);

    cout << "Enter model: ";
    getline(cin,model);

    cout << "Enter year: ";
    cin >> year;

    if (carType == "Electric") {
        dl batteryCapacity;
        cout << "Enter battery capacity (kWh): ";
        cin >> batteryCapacity;
 cout<<"Car Information: "<<endl;
        ElectricCar electricCar(move(name), move(model), year, batteryCapacity);
        electricCar.displayInfo();
    }


    else if (carType == "Gas") {
        dl fuelEfficiency;
        cout << "Enter fuel efficiency (MPG): ";
        cin >> fuelEfficiency;
         cout<<"Car Information: "<<endl;
        GasCar gasCar(move(name), move(model), year, fuelEfficiency);
        gasCar.displayInfo();
    }

    else {
        cout << "Again Enter Electric or Gas." << endl;
    }

    return 0;
}
