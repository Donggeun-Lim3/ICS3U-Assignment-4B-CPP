// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This is weekday program

#include <iostream>
#include <string>

int main() {
    std::string weekString;
    int weekdayNumber;

    std::cout << "Enter number of weekday: ";
    std::cin >> weekString;

    try {
        weekdayNumber = std::stoi(weekString);

        switch (weekdayNumber) {
            case 1 :
                std::cout << "Monday" << std::endl;
                break;
            case 2 :
                std::cout << "Tuesday" << std::endl;
                break;
            case 3 :
                std::cout << "Wednesday" << std::endl;
                break;
            case 4 :
                std::cout << "Thursday" << std::endl;
                break;
            case 5 :
                std::cout << "Friday" << std::endl;
                break;
            case 6 :
                std::cout << "Saturday" << std::endl;
                break;
            case 7 :
                std::cout << "Sunday" << std::endl;
                break;
            default :
                std::cout << "It is not weekday of number" << std::endl;
        }
        } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
