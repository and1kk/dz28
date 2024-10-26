
#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string brand, string color, double fuelTankVolume, double fuelConsumption) {
    this->brand = brand;
    this->color = color;
    this->fuelTankVolume = fuelTankVolume;
    this->fuelConsumption = fuelConsumption;
}

void Car::setValues(string brand, string color, double fuelTankVolume, double fuelConsumption) {
    this->brand = brand;
    this->color = color;
    this->fuelTankVolume = fuelTankVolume;
    this->fuelConsumption = fuelConsumption;
}

void Car::display() const {
    cout << "Марка: " << brand << endl;
    cout << "Колір: " << color << endl;
    cout << "Об'єм паливного бака: " << fuelTankVolume << " л" << endl;
    cout << "Норма споживання бензину: " << fuelConsumption << " л на 100 км" << endl;
}

double Car::calculateDistance() const {
    return (fuelTankVolume / fuelConsumption) * 100;
}
