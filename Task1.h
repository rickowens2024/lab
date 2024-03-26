#ifndef UNTITLED_TASK1_H
#define UNTITLED_TASK1_H

#include <iostream>

class Task1 {
public:
    Task1() {
        int num1, num2, num3;

        std::cout << "Введите три числа: ";
        std::cin >> num1 >> num2 >> num3;

        if (num2 > num1 + num3)
            std::cout << "Второе число больше суммы первого и третьего: " << num2 << std::endl;
        else
            std::cout << "Разница первого и второго чисел: " << (num1 - num2) << std::endl;
    }
};

#endif
