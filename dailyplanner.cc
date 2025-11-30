#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "dailyplanner.h"

day::day (std::string day):
        d_day (day)
    {
        
    }

void day::new_activity(std::string name, std::string time) {
    this -> d_name.push_back(name);
    this -> d_time.push_back(time);
}

void day::print_state() {
    std::cout << "The schedule for " << this -> d_day << " is: " << std::endl;
    for (int i = 0; i < this -> d_name.size(); i++) {
        std::cout << "\t" << this -> d_time[i] << " " << this -> d_name[i] << std::endl;
    }
}

void day::print_to_file() {
    std::ofstream outputFile("schedule.txt");
    outputFile << "The schedule for " << this -> d_day << " is: " << std::endl;
    for (int i = 0; i < this -> d_name.size(); i++) {
        outputFile << "\t" << this -> d_time[i] << " " << this -> d_name[i] << std::endl;
    }
    outputFile.close();
}

std::string day::get_day() {
    return this -> d_day;
}
