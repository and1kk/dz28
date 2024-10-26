// Truck.h
#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car {
private:
    double loadCapacity;

public:
    Truck(string brand, string color, double fuelTankVolume, double fuelConsumption, double loadCapacity);
    ~Truck();
    void setLoadCapacity(double loadCapacity);
    void displayTruckInfo() const;
    double calculateCostPerTon(double fuelPricePerLiter) const;
};

#endif // TRUCK_H
