
#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
protected:
    string brand;
    string color;
    double fuelTankVolume;
    double fuelConsumption;

public:
    Car(string brand, string color, double fuelTankVolume, double fuelConsumption);
    void setValues(string brand, string color, double fuelTankVolume, double fuelConsumption);
    void display() const;
    double calculateDistance() const;
};

#endif // CAR_H
