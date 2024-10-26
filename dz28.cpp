// main.cpp
#include <iostream>
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
    setlocale(0, "");
    Car car("Toyota", "Синій", 50, 8.5);
    cout << "Легковий автомобіль:" << endl;
    car.display();
    cout << "Максимальна відстань на повному баку: " << car.calculateDistance() << " км" << endl << endl;

   
    Truck truck("MAN", "Чорний", 150, 25, 10);
    cout << "Вантажний автомобіль:" << endl;
    truck.displayTruckInfo();
    cout << "Максимальна відстань на повному баку: " << truck.calculateDistance() << " км" << endl;

    
    double fuelPrice = 1.5; 
    cout << "Собівартість перевезення 1 т вантажу на 1 км: " << truck.calculateCostPerTon(fuelPrice) << " у.о." << endl;

    return 0;
}
