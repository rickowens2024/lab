#ifndef UNTITLED_TASK4_H
#define UNTITLED_TASK4_H

#include <iostream>

class Task4 {
public:
    Task4(double distance, double time) {
        const double speed = 60;
        double travel_time = distance / speed;

        if (travel_time <= time) {
            std::cout << "Yes, the passenger will reach the destination in " << time << " hours." << std::endl;
        } else {
            std::cout << "No, the passenger will not reach the destination in " << time << " hours." << std::endl;
        }
    }
};

#endif
