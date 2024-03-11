#ifndef UNTITLED_TASK5_H
#define UNTITLED_TASK5_H

#include <iostream>

class Task5 {
public:
    Task5() {
        int n;
        std::cout << "Введіть кількість хвилин: ";
        std::cin >> n;

        int hours = n / 60;
        int minutes = n % 60;

        std::cout << "Годинник покаже " << hours << " годин і " << minutes << " хвилин\n";
    }
};

#endif
