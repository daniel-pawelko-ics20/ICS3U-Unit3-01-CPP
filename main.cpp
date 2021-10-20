// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This programs adds 2 numbers

#include <iostream>
#include <iomanip>

int main() {
    // This function input 2 numbers and output sum
    int first;
    int second;
    int process;

    // input
    std::cout << "First Number: " << std::endl;
    std::cin >> first;
    std::cout << "Second Number: " << std::endl;
    std::cin >> second;

    // process
    process = first + second;

    // output
    std::cout << first << " + " << second;
    std::cout << " = " << process << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
