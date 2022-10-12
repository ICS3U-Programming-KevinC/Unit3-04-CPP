// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 11, 2022
// This program prints "Hello, World!" and has comments
// This program asks the user to input an integer
// then checks if it is greater than, less than or equal to zero

#include <iostream>

int main() {
    // Initializes variables
    int user_int;

    // Asks user for their number
    std::cout << "What is your integer? ";
    std::cin >> user_int;

    // Adds an extra line
    std::cout << "\n";

    // Checks if their number is greater than, less than or equal to zero
    // Then displays the result
    if (user_int > 0) {;
        std::cout << user_int << " is a positive number";
    } else if (user_int < 0) {
        std::cout << user_int << " is a negative number";
    } else {
        std::cout << "Your number is zero";
    }

    // Adds extra lines
    std::cout << "\n\n";
}
