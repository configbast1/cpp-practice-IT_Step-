#include <iostream>
#include "Classes.h"

int main() {
    using namespace std;

    Student student;
    student.name = "Иван Иванов";
    student.age = 20;
    student.university = "Университет Пример";
    student.major = "Программная инженерия";
    student.gpa = 3.8;

    Book book;
    book.title = "Программирование на C++";
    book.author = "Джон Доу";
    book.year = 2023;
    book.publisher = "Издательство Пример";
    book.pages = 450;

    Firm firm;
    firm.name = "TechSolutions Ltd.";
    firm.industry = "Информационные технологии";
    firm.employeeCount = 120;
    firm.revenue = 15.5;
    firm.location = "Киев, Украина";

    Phone phone;
    phone.brand = "ExampleBrand";
    phone.model = "X100";
    phone.os = "Android 14";
    phone.price = 699.99;
    phone.ramGB = 8;

    Car car;
    car.make = "ExampleAuto";
    car.model = "E‑Drive";
    car.year = 2021;
    car.engineVolume = 2.0;
    car.color = "Красный";

    cout << "Student:\n";
    cout << " Name: " << student.name << "\n";
    cout << " Age: " << student.age << "\n";
    cout << " University: " << student.university << "\n";
    cout << " Major: " << student.major << "\n";
    cout << " GPA: " << student.gpa << "\n\n";

    cout << "Book:\n";
    cout << " Title: " << book.title << "\n";
    cout << " Author: " << book.author << "\n";
    cout << " Year: " << book.year << "\n";
    cout << " Publisher: " << book.publisher << "\n";
    cout << " Pages: " << book.pages << "\n\n";

    cout << "Firm:\n";
    cout << " Name: " << firm.name << "\n";
    cout << " Industry: " << firm.industry << "\n";
    cout << " Employees: " << firm.employeeCount << "\n";
    cout << " Revenue: " << firm.revenue << "\n";
    cout << " Location: " << firm.location << "\n\n";

    cout << "Phone:\n";
    cout << " Brand: " << phone.brand << "\n";
    cout << " Model: " << phone.model << "\n";
    cout << " OS: " << phone.os << "\n";
    cout << " Price: $" << phone.price << "\n";
    cout << " RAM: " << phone.ramGB << " GB\n\n";

    cout << "Car:\n";
    cout << " Make: " << car.make << "\n";
    cout << " Model: " << car.model << "\n";
    cout << " Year: " << car.year << "\n";
    cout << " Engine Volume: " << car.engineVolume << " L\n";
    cout << " Color: " << car.color << "\n";

    return 0;
}

}
