#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
   (instances) of the class
    Car car1("BMW", "X5", 2020);
    Car car2("Toyota", "Corolla", 2021);

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}