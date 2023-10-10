#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    float averageGrade;

public:
    // Конструктор класса
    Student() : name(""), age(0), averageGrade(0.0) {}

    // Методы для установки атрибутов
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setAverageGrade(float newAverageGrade) {
        averageGrade = newAverageGrade;
    }

    // Метод для получения информации о студенте
    void getInfo() {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Возраст: " << age << " лет" << std::endl;
        std::cout << "Средний балл: " << averageGrade << std::endl;
    }
};

int main() {
    // Создаем объект класса Student
    Student student;

    // Устанавливаем атрибуты студента
    student.setName("Иванов Иван");
    student.setAge(20);
    student.setAverageGrade(4.5);

    // Получаем и выводим информацию о студенте
    student.getInfo();

    return 0;
}

