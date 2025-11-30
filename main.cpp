#include <iostream>
#include <string>

#include "dailyplanner.h"

int main() {
    
    day mon("mon");
    day tue("tue");
    day wed("wed");
    day thu("thu");
    day fri("fri");
    day sat("sat");
    day sun("sun");

    std::vector<day> week = {mon, tue, wed, thu, fri, sat, sun};
    std::vector<std::string> days = {};

    for (auto i: week) {
        days.push_back(i.get_day());
    }

    std::string input = "";
    std::cout << "Please enter the day of the week to update: ";
    std::cin >> input; 
  
    for (int i = 0; i < week.size(); i++) {
        if (input == days[i]) {
            std::string time;
            std::string name;

            std::cout << "Please select the time: ";
            std::getline(std::cin, time);
            std::cout << std::endl << "Please insert name of activity: ";
            std::getline(std::cin, name);

            week[i].new_activity(name, time);
            week[i].print_state();
            week[i].print_to_file();
        };
    }
    return 0;
}
