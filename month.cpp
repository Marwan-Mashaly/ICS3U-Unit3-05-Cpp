// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program tells user the month if he inputs the number

#include <iostream>
#include <string>

int main() {
    // this function tells user the month if he inputs the number
    std::string month_number_string;
    int month_number;

    // input
    std::cout << "Enter the number of a month ";
    std::cin >> month_number_string;
    std::cout << "" << std::endl;

    month_number = atoi(month_number_string.c_str());

    switch (month_number) {
        case 1 :
            std::cout << "January " << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March " << std::endl;
            break;
        case 4 :
            std::cout << "April " << std::endl;
            break;
        case 5 :
            std::cout << "May  " << std::endl;
            break;
         case 6 :
            std::cout << "June " << std::endl;
            break;
         case 7 :
            std::cout << "July " << std::endl;
            break;
         case 8 :
            std::cout << "August " << std::endl;
            break;
         case 9 :
            std::cout << "September " << std::endl;
            break;
         case 10 :
            std::cout << "October " << std::endl;
            break;
         case 11 :
            std::cout << "November" << std::endl;
            break;
         case 12 :
            std::cout << "December " << std::endl;
            break;

        default :
            std::cout << "Invalid month" << std::endl;
    }
}
