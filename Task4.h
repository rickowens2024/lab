#ifndef UNTITLED_TASK4_H
#define UNTITLED_TASK4_H

#include <iostream>

class Task4 {
public:
    Task4() {
        int A, B, n;
        std::cout << "Введіть ціну олівця у гривнях: ";
        std::cin >>
                 A;
        std::cout << "Введіть ціну олівця у копійках: ";
        std::cin >>
                 B;
        std::cout << "Введіть кількість олівців: ";
        std::cin >>
                 n;

        int total_in_kop = (A * 100 + B) * n;
        int hryvnias = total_in_kop / 100;
        int remainder_kop = total_in_kop % 100;

        std::cout << "Загальна вартість " << n << " олівців становить " << hryvnias << " гривень та " << remainder_kop
                  << " копійок\n";
    }
};


#endif
