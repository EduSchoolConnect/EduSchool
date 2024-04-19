﻿#include "EduSchool.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int option;

void EduSchool::clearScreen() {
    system("cls");
}

void asciiArt() {
    cout << setw(83) << "  _____    _       ____       _                 _ " << endl;
    cout << setw(83) << " | ____|__| |_   _/ ___|  ___| |__   ___   ___ | |" << endl;
    cout << setw(83) << " |  _| / _` | | | \\___ \\ / __| '_ \\ / _ \\ / _ \\| |" << endl;
    cout << setw(83) << " | |__| (_| | |_| |___) | (__| | | | (_) | (_) | |" << endl;
    cout << setw(83) << " |_____\\__,_|\\__,_|____/ \\___|_| |_|\\___/ \\___/|_|" << endl;
    cout << endl;
}
void EduSchool::displayMenu() {
    clearScreen();
    asciiArt();
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(68) << " Welcome to EduSchool" << endl;
}

void EduSchool::displayOptions() {
    cout << endl;
    cout << endl;
    cout << setw(62) << "Main Menu" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(65) << "[1] Take a Test" << endl;
    cout << setw(66) << "[2] Instructions" << endl;
    cout << setw(61) << "[3] Credits" << endl;
    cout << setw(58) << "[4] Quit" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(67) << "Enter your choice: ";

    cin >> option;

    if (option != 1 && option != 2 && option != 3 && option != 4) {
        cout << endl;
        cout << setw(75) << "This is not an available option!" << endl;
        displayOptions();
    }

}

void EduSchool::displayInstructions() {
    clearScreen();
    cout << endl;
    cout << setw(92) << "Our application is made, so students can test their knowledge on" << endl;
    cout << setw(96) << "different subjects. When you pick the test you want to take you will be" << endl;
    cout << setw(105) << "welcomed by a few questions. Each question gives you a point. At the end of the test you" << endl;
    cout << setw(112) << "can see how many points you have and the correct answer to the questions you have made a mistake on." << endl;
    cout << endl;
    displayOptions();
}

void EduSchool::displayCredits() {
    clearScreen();
    cout << endl;
    cout << setw(100) << "You can check our application at: https://github.com/EduSchoolConnect/EduSchool.git" << endl;
    cout << endl;
    displayOptions();
}

void EduSchool::takeMathTest() {
    clearScreen();
    asciiArt();
    int score = 0;
    char answer;
    
    cout << setw(75) << "----------------------------------" << endl;
    cout << endl;
    cout << setw(62) << "Math Test" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(26) << "1. What is 2 + 2?" << endl;
    cout << setw(15) << "a) 3" << endl;
    cout << setw(15) << "b) 4" << endl;
    cout << setw(15) << "c) 5" << endl;
    cout << setw(15) << "d) 6" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'b') score++;

    cout << endl;
    cout << endl;
    cout << setw(54) << "2. What is the value of pi (π) approximately?" << endl;
    cout << setw(18) << "a) 3.14" << endl;
    cout << setw(19) << "b) 3.141" << endl;
    cout << setw(20) << "c) 3.1415" << endl;
    cout << setw(21) << "d) 3.14159" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'a') score++;
    
    cout << endl;
    cout << endl;
    cout << setw(42) << "3. What is the square root of 16?" << endl;
    cout << setw(15) << "a) 2" << endl;
    cout << setw(15) << "b) 3" << endl;
    cout << setw(15) << "c) 4" << endl;
    cout << setw(15) << "d) 5" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << endl;
    cout << endl;
    cout << setw(64) << "4. What is the formula to find the area of a rectangle?" << endl;
    cout << endl;
    cout << setw(37) << "Your answer (Open-ended): ";
    string openEnded;
    cin.ignore();
    getline(cin, openEnded);

    cout << endl;
    cout << endl;
    cout << setw(70) << "5. What is the formula to find the circumference of a circle?" << endl;
    cout << endl;
    cout << setw(37) << "Your answer (Open-ended): ";
    getline(cin, openEnded);

    cout << endl;
    cout << endl;
    cout << setw(64) << "Math Test Completed!" << endl;
    cout << endl;
    cout << setw(58) << "Your score: " << score << "/3" << endl;
    cout << endl;
}

void EduSchool::takeProgrammingTest() {
    clearScreen();
    asciiArt();
    int score = 0;
    char answer;

    cout << setw(75) << "----------------------------------" << endl;
    cout << endl;
    cout << setw(69) << "Programming Test (C++)" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(39) << "1. What does 'cout' do in C++?" << endl;
    cout << setw(39) << "a) Reads input from the user" << endl;
    cout << setw(42) << "b) Writes output to the console" << endl;
    cout << setw(33) << "c) Declares a variable" << endl;
    cout << setw(44) << "d) Performs arithmetic operations" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'b') score++;

    cout << endl;
    cout << endl;
    cout << setw(66) << "2. Which data type is used to store whole numbers in C++?" << endl;
    cout << setw(19) << "a) float" << endl;
    cout << setw(20) << "b) double" << endl;
    cout << setw(17) << "c) int" << endl;
    cout << setw(18) << "d) char" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << endl;
    cout << endl;
    cout << setw(38) << "3. What does 'cin' do in C++?" << endl;
    cout << setw(37) << "a) Reads input from a file" << endl;
    cout << setw(42) << "b) Writes output to the console" << endl;
    cout << setw(33) << "c) Declares a variable" << endl;
    cout << setw(39) << "d) Reads input from the user" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'd') score++;

    cout << endl;
    cout << endl;
    cout << setw(63) << "4. What is the difference between '==' and '=' in C++?" << endl;
    cout << endl;
    cout << setw(37) << "Your answer (Open-ended): ";
    string openEnded;
    cin.ignore();
    getline(cin, openEnded);

    cout << endl;
    cout << endl;
    cout << setw(57) << "5. What is the purpose of 'if' statement in C++?" << endl;
    cout << endl;
    cout << setw(37) << "Your answer (Open-ended): ";
    getline(cin, openEnded);

    cout << endl;
    cout << endl;
    cout << setw(68) << "Programming Test Completed!" << endl;
    cout << endl;
    cout << setw(59) << "Your score: " << score << "/3" << endl;
    cout << endl;
}

void EduSchool::takeEnglishTest() {
    clearScreen();
    asciiArt();
    int score = 0;
    char answer;

    cout << setw(75) << "----------------------------------" << endl;
    cout << endl;
    cout << setw(64) << "English Test" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(45) << "1. Which of the following is a verb?" << endl;
    cout << setw(19) << "a) House" << endl;
    cout << setw(17) << "b) Car" << endl;
    cout << setw(17) << "c) Run" << endl;
    cout << setw(18) << "d) Blue" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << endl;
    cout << endl;
    cout << setw(42) << "2. What is a synonym for 'happy'?" << endl;
    cout << setw(17) << "a) Sad" << endl;
    cout << setw(19) << "b) Angry" << endl;
    cout << setw(20) << "c) Joyful" << endl;
    cout << setw(21) << "d) Fearful" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << endl;
    cout << endl;
    cout << setw(47) << "3. What is the plural form of 'child'?" << endl;
    cout << setw(20) << "a) Childs" << endl;
    cout << setw(21) << "b) Childes" << endl;
    cout << setw(20) << "c) Childs" << endl;
    cout << setw(22) << "d) Children" << endl;
    cout << endl;
    cout << setw(22) << "Your answer: ";
    cin >> answer;
    if (answer == 'd') score++;

    cout << endl;
    cout << endl;
    cout << setw(50) << "4. What is the definition of 'adjective'?" << endl;
    cout << endl;
    cout << setw(37) << "Your answer (Open-ended): ";
    string openEnded;
    cin.ignore();
    getline(cin, openEnded);

    cout << endl;
    cout << endl;
    cout << setw(52) << "5. Write a sentence using the word 'happy'." << endl;
    cout << setw(37) << "Your answer (Open-ended): ";
    getline(cin, openEnded);

    cout << endl;
    cout << endl;
    cout << setw(70) << "English Test Completed!" << endl;
    cout << setw(63) << "Your score: " << score << "/3" << endl;
    cout << endl;
}

void EduSchool::pickOptions() {
    if (option == 1) {
        clearScreen();
        asciiArt();
        int subjectOption;
        cout << setw(75) << "----------------------------------" << endl;
        cout << setw(62) << "Test Menu" << endl;
        cout << endl;
        cout << endl;
        cout << setw(66) << "Choose a Subject" << endl;
        cout << setw(75) << "----------------------------------" << endl;
        cout << setw(58) << "[1] Math" << endl;
        cout << setw(65) << "[2] Programming" << endl;
        cout << setw(61) << "[3] English" << endl;
        cout << setw(71) << "[4] Back to Main Menu" << endl;
        cout << setw(75) << "----------------------------------" << endl;
        cout << setw(68) << "Enter your choice: ";
        cin >> subjectOption;

        switch (subjectOption) {
        case 1:
            takeMathTest();
            break;
        case 2:
            takeProgrammingTest();
            break;
        case 3:
            takeEnglishTest();
            break;
        case 4:
            clearScreen();
            asciiArt();
            displayOptions();
            pickOptions();
        default:
            cout << "Invalid subject option!" << endl;
            break;
        }
        cout << "Press any key to return to the main menu...";
        cin.ignore();
        cin.get();
        clearScreen();
        asciiArt();
        displayOptions();
        pickOptions();
    }
    else if (option == 2) {
        displayInstructions();
        pickOptions();
    }
    else if (option == 3) {
        displayCredits();
        pickOptions();
    }
    else if (option == 4) {
        exit(0);
    }
}
