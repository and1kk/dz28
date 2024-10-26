// Truck.cpp
#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(string brand, string color, double fuelTankVolume, double fuelConsumption, double loadCapacity)
    : Car(brand, color, fuelTankVolume, fuelConsumption) {
    this->loadCapacity = loadCapacity;
}

Truck::~Truck() {
    cout << "Деструктор вантажного автомобіля викликано для: " << brand << endl;
}

void Truck::setLoadCapacity(double loadCapacity) {
    this->loadCapacity = loadCapacity;
}

void Truck::displayTruckInfo() const {
    display();
    cout << "Вантажопідйомність: " << loadCapacity << " т" << endl;
}

double Truck::calculateCostPerTon(double fuelPricePerLiter) const {
    return ((fuelConsumption / 100) * fuelPricePerLiter) / loadCapacity;
}
