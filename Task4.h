#ifndef UNTITLED_TASK4_H
#define UNTITLED_TASK4_H

#include <iostream>

class Task4 {
public:
    Task4(double distance, double time) {
        const double speed = 60;
        double travel_time = distance / speed;

        if (travel_time <= time) {
            std::cout << "Да, пассажир успеет доехать до места за " << time << " часов." << std::endl;
        } else {
            std::cout << "Нет, пассажир не успеет доехать до места за " << time << " часов." << std::endl;
        }
    }
};

#endif
