#include <iostream>
#include <iomanip>

using namespace std;

void displayMainMenu() {
    cout << setw(83) << "  _____    _       ____       _                 _ " << endl;
    cout << setw(83) << " | ____|__| |_   _/ ___|  ___| |__   ___   ___ | |" << endl;
    cout << setw(83) << " |  _| / _` | | | \\___ \\ / __| '_ \\ / _ \\ / _ \\| |" << endl;
    cout << setw(83) << " | |__| (_| | |_| |___) | (__| | | | (_) | (_) | |" << endl;
    cout << setw(83) << " |_____\\__,_|\\__,_|____/ \\___|_| |_|\\___/ \\___/|_|" << endl;
    cout << endl;
    cout << setw(75) << "=================================" << endl;
}
int main()
{
    displayMainMenu();
}

