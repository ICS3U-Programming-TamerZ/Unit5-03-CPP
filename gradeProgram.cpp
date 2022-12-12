// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date : Nov.28, 2022
// This program calculates the middle mark of a level

#include <iostream>

// Defines function for the triangle area calculator
std::string MidMark(std::string level) {
    /* If statements used to determine the middle
    mark to be returned*/
    if (level == "4+") {
        return "97.5%";
    } else if (level == "4") {
        return "90.5%";
    } else if (level == "4-") {
        return "83%";
    } else if (level == "3+") {
        return "78%";
    } else if (level == "3") {
        return "74%";
    } else if (level == "3-") {
        return "71%";
    } else if (level == "2+") {
        return "68%";
    } else if (level == "2") {
        return "64.5%";
    } else if (level == "2-") {
        return "61%";
    } else if (level == "1+") {
        return "58%";
    } else if (level == "1") {
        return "54.5%";
    } else if (level == "1-") {
        return "51%";
    } else if (level == "R") {
        return "24.5%";
    } else if (level == "r") {
        return "24.5%";
    } else {
        return "-1";
    }
}

int main() {
    // Declaring variables
    std::string userLevel, percentage;

    // Asks the user for a level
    std::cout << "Enter a level: ";
    std::cin >> userLevel;

    // Stores the return value of MidMark in the percentage variable
    percentage = MidMark(userLevel);

    // Tells the user they did not enter a valid level
    if (percentage == "-1") {
        std::cout << userLevel << " is not a valid level\n";

        // Displays the middle mark of the given level
    } else {
        std::cout << "The middle mark of a level " << userLevel;
        std::cout << " is " << percentage << ".\n";
    }
}
