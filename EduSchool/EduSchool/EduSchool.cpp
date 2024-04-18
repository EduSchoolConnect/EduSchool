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
    cout << setw(65) << "[1] Take a Test" << endl;
    cout << setw(66) << "[2] Instructions" << endl;
    cout << setw(61) << "[3] Credits" << endl;
    cout << setw(58) << "[4] Quit" << endl;
    cout << setw(75) << "----------------------------------" << endl;
    cout << setw(68) << "Enter your choice: ";
    
    cin >> option;

    if (option != 1 && option != 2 && option != 3 && option != 4) {
        cout << endl;
        cout << setw(75) << "This is not an avaliable option!" << endl;
        displayOptions();
    }
}
int main()
{
    displayMenu();
    displayOptions();
}

