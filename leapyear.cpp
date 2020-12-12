// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program will check if the year is a leap year

#include <iostream>

int main() {
    int year;
    std::string year_as_string;

    // input
    std::cout << "Enter a year : ";
    std::cin >> year_as_string;

    // process & output
    try {
        year = std::stoi(year_as_string);

        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << " it is a leap year.";
                } else {
                  std::cout << "its not a leap year";
                }
            } else {
                std::cout << " its a leap year ";
            }
        } else {
            std::cout << "its  not a leap year ";
        }
    } catch (std::invalid_argument) {
            std::cout << "That was not a valid integer" << std::endl;
    }
}
