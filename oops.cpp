#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int price;

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Price: $" << price << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 22000;

    myCar.display();

    return 0;
}
