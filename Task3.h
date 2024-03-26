#ifndef UNTITLED_TASK3_H
#define UNTITLED_TASK3_H

#include <iostream>

class Task3 {
public:
    Task3() {
        int score;

        std::cout << "Введите оценку (от 0 до 100): ";
        std::cin >> score;

        if (score >= 0 && score <= 100) {
            if (score >= 90) {
                std::cout << "Отличная оценка! Продолжайте в том же духе!" << std::endl;
            } else if (score >= 80) {
                std::cout << "Хорошая оценка! Неплохо, но можно лучше." << std::endl;
            } else if (score >= 70) {
                std::cout << "Удовлетворительная оценка. Есть место для улучшений." << std::endl;
            } else if (score >= 60) {
                std::cout << "Достаточная оценка. Рекомендуется больше усилий." << std::endl;
            } else {
                std::cout << "Низкая оценка. Нужно серьезно поработать." << std::endl;
            }
        } else {
            std::cout << "Оценка введена неверно. Оценка должна быть от 0 до 100." << std::endl;
        }
    }
};

#endif
