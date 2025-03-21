// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Mar. 21, 2025
// This program creates a guessing game with a number range 0-9.

// Includes the iostream library for input and output functions.
#include <iostream>
// Include the random library for random number generators.
#include <random>

int main() {
    // Declare some random number as an integer.
    int correctNumber;
    // Creates the seed.
    std::random_device rseed;
    // Generates the seed using the mersenne twister.
    std::mt19937 rgen(rseed());
    // Distributes the possible integers over a distance of 0-9.
    std::uniform_int_distribution<int> idist(0, 9);
    // Sets the random number to the distributed integer.
    correctNumber = idist(rgen);

    // Declare the variable for the chosen number.
    int chosenNumber;

    // Asks the user to guess a number between 0 and 9.
    std::cout << "Guess a number between 0 and 9: ";
    // Stores the user's choice in the chosen number variable.
    std::cin >> chosenNumber;

    /* Check if the user chose the correct number. Otherwise, 
    check if the user did not choose the correct number. */
    if (chosenNumber == correctNumber) {
        // Displays they got it correct.
        std::cout << "You guessed correct!" << std::endl;
    } else {
        // Displays they got it wrong, and they must try again.
        std::cout << "You guessed wrong! The correct answer was "
        << correctNumber << "." << std::endl;
    }
}
