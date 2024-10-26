
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
    cout << "�����: " << brand << endl;
    cout << "����: " << color << endl;
    cout << "��'�� ��������� ����: " << fuelTankVolume << " �" << endl;
    cout << "����� ���������� �������: " << fuelConsumption << " � �� 100 ��" << endl;
}

double Car::calculateDistance() const {
    return (fuelTankVolume / fuelConsumption) * 100;
}
