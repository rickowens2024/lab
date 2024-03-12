#ifndef UNTITLED_TASK2_H
#define UNTITLED_TASK2_H

#include <iostream>

class Task2 {
public:
    Task2() {
        setlocale(LC_ALL, "ru");
        std::cout << "Cкiлъки пiц зaмoвляeтe?";
        std::cin >> count;

        std::cout << "Cкiльки кoштyє oднa пiцa?";
        std::cin >> price;

        float total = count * price;
        std::cout << "Цiнa без знижки: " << total;

        float discount = total * 0.1;
        total = total - discount;
        std::cout << "\nРозмiр знижки: " << discount << "\nЦiна зi знижкою: " << total;
    }

private:
    int count{};
    float price{};
};

#endif
