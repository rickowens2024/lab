#ifndef UNTITLED_TASK2_H
#define UNTITLED_TASK2_H

#include <iostream>
#include <cmath>

class Task2 {
public:
    Task2() {
        double num1, num2, num3;

        std::cout << "Введите три действительных числа: ";
        std::cin >> num1 >> num2 >> num3;

        if (num1 >= 0)
            std::cout << "Квадрат числа " << num1 << ": " << pow(num1, 2) << std::endl;

        if (num2 >= 0)
            std::cout << "Квадрат числа " << num2 << ": " << pow(num2, 2) << std::endl;

        if (num3 >= 0)
            std::cout << "Квадрат числа " << num3 << ": " << pow(num3, 2) << std::endl;
    }
};

#endif