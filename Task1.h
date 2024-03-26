#ifndef UNTITLED_TASK1_H
#define UNTITLED_TASK1_H

#include <iostream>

class Task1 {
public:
    Task1() {
        int num1, num2, num3;

        std::cout << "Enter three numbers: ";
        std::cin >> num1 >> num2 >> num3;

        if (num2 > num1 + num3)
            std::cout << "The second number is greater than the sum of the first and third: " << num2 << std::endl;
        else
            std::cout << "The difference between the first and second numbers: " << (num1 - num2) << std::endl;
    }
};

#endif
