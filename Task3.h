#ifndef UNTITLED_TASK3_H
#define UNTITLED_TASK3_H

#include <iostream>

class Task3 {
public:
    Task3() {
        int score;

        std::cout << "Enter a score (from 0 to 100): ";
        std::cin >> score;

        if (score >= 0 && score <= 100) {
            if (score >= 90) {
                std::cout << "Excellent score! Keep up the good work!" << std::endl;
            } else if (score >= 80) {
                std::cout << "Good score! Not bad, but there's room for improvement." << std::endl;
            } else if (score >= 70) {
                std::cout << "Satisfactory score. There is room for improvement." << std::endl;
            } else if (score >= 60) {
                std::cout << "Passing score. More effort is recommended." << std::endl;
            } else {
                std::cout << "Low score. Serious effort is needed." << std::endl;
            }
        } else {
            std::cout << "Invalid score entered. Score should be between 0 and 100." << std::endl;
        }
    }
};

#endif
