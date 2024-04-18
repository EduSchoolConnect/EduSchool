#include "EduSchool.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int option;

void EduSchool::clearScreen() {
    system("cls");
}

void EduSchool::displayMenu() {
    clearScreen();
    cout << setw(83) << "  _____    _       ____       _                 _ " << endl;
    cout << setw(83) << " | ____|__| |_   _/ ___|  ___| |__   ___   ___ | |" << endl;
    cout << setw(83) << " |  _| / _` | | | \\___ \\ / __| '_ \\ / _ \\ / _ \\| |" << endl;
    cout << setw(83) << " | |__| (_| | |_| |___) | (__| | | | (_) | (_) | |" << endl;
    cout << setw(83) << " |_____\\__,_|\\__,_|____/ \\___|_| |_|\\___/ \\___/|_|" << endl;
    cout << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(68) << " Welcome to EduSchool" << endl;
}

void EduSchool::displayOptions() {
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(66) << "[1] Take a Test" << endl;
    cout << setw(67) << "[2] Instructions" << endl;
    cout << setw(62) << "[3] Credits" << endl;
    cout << setw(59) << "[4] Quit" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(68) << "Enter your choice: ";

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
    int score = 0;
    char answer;

    cout << "Math Test:" << endl;
    cout << "1. What is 2 + 2?" << endl;
    cout << "   a) 3" << endl;
    cout << "   b) 4" << endl;
    cout << "   c) 5" << endl;
    cout << "   d) 6" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b') score++;

    cout << "2. What is the value of pi (π) approximately?" << endl;
    cout << "   a) 3.14" << endl;
    cout << "   b) 3.141" << endl;
    cout << "   c) 3.1415" << endl;
    cout << "   d) 3.14159" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a') score++;

    cout << "3. What is the square root of 16?" << endl;
    cout << "   a) 2" << endl;
    cout << "   b) 3" << endl;
    cout << "   c) 4" << endl;
    cout << "   d) 5" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << "4. What is the formula to find the area of a rectangle?" << endl;
    cout << "Your answer (Open-ended): ";
    string openEnded;
    cin.ignore(); // Clear the input buffer
    getline(cin, openEnded);
    // No validation for open-ended questions

    cout << "5. What is the formula to find the circumference of a circle?" << endl;
    cout << "Your answer (Open-ended): ";
    getline(cin, openEnded);
    // No validation for open-ended questions

    cout << "Math Test Completed!" << endl;
    cout << "Your score: " << score << "/3" << endl;
    cout << endl;
}

void EduSchool::takeProgrammingTest() {
    clearScreen();
    int score = 0;
    char answer;

    cout << "Programming Test (C++):" << endl;
    cout << "1. What does 'cout' do in C++?" << endl;
    cout << "   a) Reads input from the user" << endl;
    cout << "   b) Writes output to the console" << endl;
    cout << "   c) Declares a variable" << endl;
    cout << "   d) Performs arithmetic operations" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b') score++;

    cout << "2. Which data type is used to store whole numbers in C++?" << endl;
    cout << "   a) float" << endl;
    cout << "   b) double" << endl;
    cout << "   c) int" << endl;
    cout << "   d) char" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << "3. What does 'cin' do in C++?" << endl;
    cout << "   a) Reads input from a file" << endl;
    cout << "   b) Writes output to the console" << endl;
    cout << "   c) Declares a variable" << endl;
    cout << "   d) Reads input from the user" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'd') score++;

    cout << "4. What is the difference between '==' and '=' in C++?" << endl;
    cout << "Your answer (Open-ended): ";
    string openEnded;
    cin.ignore();
    getline(cin, openEnded);
    // No validation for open-ended questions

    cout << "5. What is the purpose of 'if' statement in C++?" << endl;
    cout << "Your answer (Open-ended): ";
    getline(cin, openEnded);
    // No validation for open-ended questions

    cout << "Programming Test Completed!" << endl;
    cout << "Your score: " << score << "/3" << endl;
    cout << endl;
}

void EduSchool::takeEnglishTest() {
    clearScreen();
    int score = 0;
    char answer;

    cout << "English Test:" << endl;
    cout << "1. Which of the following is a verb?" << endl;
    cout << "   a) House" << endl;
    cout << "   b) Car" << endl;
    cout << "   c) Run" << endl;
    cout << "   d) Blue" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << "2. What is a synonym for 'happy'?" << endl;
    cout << "   a) Sad" << endl;
    cout << "   b) Angry" << endl;
    cout << "   c) Joyful" << endl;
    cout << "   d) Fearful" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'c') score++;

    cout << "3. What is the plural form of 'child'?" << endl;
    cout << "   a) Childs" << endl;
    cout << "   b) Childes" << endl;
    cout << "   c) Childs" << endl;
    cout << "   d) Children" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'd') score++;

    cout << "4. What is the definition of 'adjective'?" << endl;
    cout << "Your answer (Open-ended): ";
    string openEnded;
    cin.ignore();
    getline(cin, openEnded);
    // No validation for open-ended questions

    cout << "5. Write a sentence using the word 'happy'." << endl;
    cout << "Your answer (Open-ended): ";
    getline(cin, openEnded);
    // No validation for open-ended questions

    cout << "English Test Completed!" << endl;
    cout << "Your score: " << score << "/3" << endl;
    cout << endl;
}

void EduSchool::pickOptions() {
    if (option == 1) {
        clearScreen();
        int subjectOption;
        cout << "Choose a subject:" << endl;
        cout << "[1] Math" << endl;
        cout << "[2] Programming" << endl;
        cout << "[3] English" << endl;
        cout << "Enter your choice: ";
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
        default:
            cout << "Invalid subject option!" << endl;
            break;
        }
        cout << "Press any key to return to the main menu...";
        cin.ignore();
        cin.get(); // Wait for user to press any key
        pickOptions(); // Return to main menu after completing the test
    }
    else if (option == 2) {
        displayInstructions();
    }
    else if (option == 3) {
        displayCredits();
    }
    else if (option == 4) {
        exit(0);
    }
}
