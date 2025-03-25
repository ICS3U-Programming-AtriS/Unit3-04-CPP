// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 25, 2025
// Program that checks the sign of an integer provided by the user

#include <iostream>

int main() {
    // Get integer from user, user_int
    int user_int;
    std::cout << "Enter an integer: ";
    std::cin >> user_int;

    // If it's greater than 0, it's positive
    if (user_int > 0) {
        // Tell the user that the integer is positive
        std::cout << user_int << " is Positive!\n";
    } else if (user_int == 0)  /*If it's equal to 0, the integer is 0*/ {
        // Zero is neither positive nor negative
        // Tell the user that the integer is Zero
        std::cout << user_int << " is Zero!\n";
    } else /*If it's not positive and not zero, it must be negative*/ {
        // Tell the user that the integer is negative
        std::cout << user_int << " is Negative!\n";
    }
}
