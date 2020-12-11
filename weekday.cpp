// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This is month program

#include <iostream>
#include <string>

int main() {
    // this function prints out the day of the month
    std::string weekString;
    int weekdayNumber;

    // input
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
                std::cout << "Wendnesday" << std::endl;
                break;
            case 4 :
                std::cout << "Thursday" << std::endl;
                break;
            case 5 :
                std::cout << "May" << std::endl;
                break;
            case 6 :
                std::cout << "Jun" << std::endl;
                break;
            case 7 :
                std::cout << "July" << std::endl;
                break;
            case 8 :
                std::cout << "August" << std::endl;
                break;
            case 9 :
                std::cout << "September" << std::endl;
                break;
            case 10 :
                std::cout << "October" << std::endl;
                break;
            case 11 :
                std::cout << "November" << std::endl;
                break;
            case 12 :
                std::cout << "December" << std::endl;
                break;
            default :
                std::cout << "It is not month of number" << std::endl;
        }
        } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
