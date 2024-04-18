#include <iostream>
#include <iomanip>

using namespace std;

int option;

void displayMenu() {
    cout << setw(83) << "  _____    _       ____       _                 _ " << endl;
    cout << setw(83) << " | ____|__| |_   _/ ___|  ___| |__   ___   ___ | |" << endl;
    cout << setw(83) << " |  _| / _` | | | \\___ \\ / __| '_ \\ / _ \\ / _ \\| |" << endl;
    cout << setw(83) << " | |__| (_| | |_| |___) | (__| | | | (_) | (_) | |" << endl;
    cout << setw(83) << " |_____\\__,_|\\__,_|____/ \\___|_| |_|\\___/ \\___/|_|" << endl;
    cout << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(68) << " Welcome to EduSchool" << endl;
    }
void displayOptions() {
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
        cout << setw(75) << "This is not an avaliable option!" << endl;
        displayOptions();
    }
}
void displayInstructions() {
    cout << endl;
    cout << setw(92) << "Our application is made, so students can test their knowledge on" << endl;
    cout << setw(96) << "different subjects. When you pick the test you want to take you will be" << endl;
    cout << setw(105) << "welcomed by a few questions. Each question gives you a point. At the end of the test you" << endl;
    cout << setw(112) << "can see how many points you have and the correct answer to the questions you have made a mistake on." << endl;
    cout << endl;
    displayOptions();
}
void displayCredits() {
    cout << endl;
    cout << setw(100) << "You can check our application at: https://github.com/EduSchoolConnect/EduSchool.git" << endl;
    cout << endl;
    displayOptions();
}
void pickOptions() {
    if (option == 2) {
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
int main()
{
    displayMenu();
    displayOptions();
    pickOptions();
}

