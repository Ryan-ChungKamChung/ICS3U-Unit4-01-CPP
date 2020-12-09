// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program adds numbers up to the inputted number

#include <iostream>
#include <string>


int main() {
    // Function adds numbers up to the inputted number

    std::string numberString;
    int number;
    int loopCounter = 0;
    int numberSum = 0;

    std::cout << "Give me a positive number and I will add numbers up"
    " until the number you input" << std::endl;

    // Input
    std::cout << "Enter number: ";
    std::cin >> numberString;

    // Process
    try {
        number = std::stoi(numberString);

        // Output
        if (number < 0) {
            // https://stackoverflow.com/questions/54801271/
                // try-catch-using-a-function-for-negative-integers
            throw std::invalid_argument("This isn't a valid number");
        }

        while (loopCounter < number) {
            loopCounter = loopCounter + 1;
            numberSum = numberSum + loopCounter;
        }

        // Output
        std::cout << numberSum << std::endl;
    } catch (std::invalid_argument) {
        // Output
        std::cout << "This isn't a valid number" << std::endl;
    }
}
