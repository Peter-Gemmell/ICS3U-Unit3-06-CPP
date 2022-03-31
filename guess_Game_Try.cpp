// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <random>
#include <string>

int main() {
    // this function is the game
    std::string guessNumberstring;
    int guessNumber;
    int mystery_Number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    mystery_Number = idist(rgen);

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> guessNumberstring;

    // process & output
    try {
        guessNumber = std::stoi(guessNumberstring);
        if (guessNumber == mystery_Number) {
            std::cout << "\nYou guessed correctly!" << std::endl;
        } else {
            std::cout << "You guessed wrong!" << std::endl;
            std::cout << "\nThe correct answer was" " "
            << mystery_Number << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid number guessed, please try again.";
    }
    std::cout << "\n\nDone." << std::endl;
}
