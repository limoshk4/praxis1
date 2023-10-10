#include <iostream>
#include <cmath>
using namespace std;
class Circle {
private:
    double radius;

public:

    Circle() : radius(0.0) {}

    void setRadius(double newRadius) {
        if (newRadius >= 0.0) {
            radius = newRadius;
        } else {
             cout << "ERROR" <<  endl;
        }
    }

    double getArea() {
        return M_PI * radius * radius;
    }
};

int main() {

    Circle circle;

    circle.setRadius(53.0);


     cout << "Area: " << circle.getArea() <<  endl;

    return 0;
}
