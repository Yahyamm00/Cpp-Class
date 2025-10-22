
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
        cout << "Brand: " << brand << "     Model: " << model << "     Year: " << year << endl;
    }
};

int main() {
    Car car1("Porche", "Carerra GT", 2007);
    Car car2("Lexus", "LFA", 2012);

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
