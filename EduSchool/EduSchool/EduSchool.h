#pragma once
#ifndef EDUSCHOOL_H
#define EDUSCHOOL_H

#include <string>

class EduSchool {
public:
    static void clearScreen();
    static void displayMenu();
    static void displayOptions();
    static void displayInstructions();
    static void displayCredits();
    static void pickOptions();
    static void takeMathTest();
    static void takeProgrammingTest();
    static void takeEnglishTest();
};

#endif // EDUSCHOOL_H