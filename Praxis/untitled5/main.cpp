#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    float Grade;
public:
    Student() : name(""), age(0), Grade(0.0) {}

    void setName(const string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setGrade(float newGrade) {
        Grade = newGrade;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " age" << endl;
        cout << "Grade: " << Grade << endl;
    }
};

int main() {

    Student student;

    student.setName("Filimo Lim");
    student.setAge(20);
    student.setGrade(4.5);

    student.getInfo();

    return 0;
}


