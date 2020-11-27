// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
/* This program determines if the user guesses
a randomly generated number correctly */

#include <iostream>
#include <random>

int main() {
    /* This function obtains an input from the user and the computer and
    determines if the user's guess is correct */

    double guess;
    int randomlyGeneratedNumber;

    // Random generator code
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    randomlyGeneratedNumber = idist(rgen);

    std::cout << "" << std::endl;
    std::cout << "This program makes the user guess the number"
          "that the computer has saved." << std::endl;
    std::cout << "Please input a number (from 0 to 9):" << std::endl;
    std::cin >> guess;
    std::cout << "" << std::endl;
    if (randomlyGeneratedNumber == guess) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "Incorrect please try again" << std::endl;
    }
}
