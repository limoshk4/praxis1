#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double height;

public:

    Rectangle() : width(0.0), height(0.0) {}

    void setWidth(double newWidth) {
        if (newWidth >= 0.0) {
            width = newWidth;
        } else {
              cout << "ERROR" <<endl;
        }
    }

    void setHeight(double newHeight) {
        if (newHeight >= 0.0) {
            height = newHeight;
        } else {
              cout << "ERROR" <<endl;
        }
    }

    double getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;

    rectangle.setWidth(8.0);
    rectangle.setHeight(16.0);

      cout << "Area: " << rectangle.getArea() <<endl;

    return 0;
}

