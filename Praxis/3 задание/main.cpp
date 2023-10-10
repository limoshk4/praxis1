#include <iostream>
#include <string>
using namespace std ;
class Car {
private:
    string brand;
    string model;
    int year;

public:

    Car() : brand(""), model(""), year(0) {}

    void setBrand(const string& newBrand) {
        brand = newBrand;
    }

    void setModel(const string& newModel) {
        model = newModel;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    void getInfo() {
        cout << "Brend: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {

    Car car;

    car.setBrand("Zhiguli");
    car.setModel("Semerka");
    car.setYear(1982);

    car.getInfo();

    return 0;
}
