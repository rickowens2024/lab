#ifndef UNTITLED_TASK1_H
#define UNTITLED_TASK1_H

#include <iostream>

class Task1 {
private:
    int a;
    int a1;
    int a2;
    int res;

public:
    Task1() {
        a = 74;
        a1 = a / 10;
        a2 = a % 10;
        res = a1 + a2;
        std::cout << "Result: " << res << std::endl;
    }
};

#endif