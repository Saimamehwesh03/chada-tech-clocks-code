/*
 * Chada Tech Clock Program
 * Author: [Your Name]
 */

#include <iostream>
#include <iomanip>

using namespace std;

// Function declarations
void displayClock(int hour, int minute, int second);
void displayMenu();
void addHour(int& hour);
void addMinute(int& minute, int& hour);
void addSecond(int& second, int& minute, int& hour);

int main() {

    // Starting time
    int hour = 12;
    int minute = 0;
    int second = 0;

    int choice = 0;

    // Loop until user exits
    while (choice != 4) {

        // Show clocks and menu
        displayClock(hour, minute, second);
        displayMenu();

        cout << "Enter choice: ";
        cin >> choice;

        // Menu options
        if (choice == 1) {
            addHour(hour);
        }
        else if (choice == 2) {
            addMinute(minute, hour);
        }
        else if (choice == 3) {
            addSecond(second, minute, hour);
        }
        else if (choice == 4) {
            cout << "Program ended." << endl;
        }
        else {
            cout << "Invalid choice." << endl;
        }

        cout << endl;
    }

    return 0;
}

// Function to display both clocks
void displayClock(int hour, int minute, int second) {

    // 24-hour clock
    cout << "***********************    ***********************" << endl;
    cout << "*     12-Hour Clock   *    *     24-Hour Clock   *" << endl;

    // Convert to 12-hour format
    int hour12 = hour;
    string period = "AM";

    if (hour == 0) {
        hour12 = 12;
    }
    else if (hour == 12) {
        period = "PM";
    }
    else if (hour > 12) {
        hour12 = hour - 12;
        period = "PM";
    }

    // Display 12-hour clock
    cout << "*      "
         << setw(2) << setfill('0') << hour12 << ":"
         << setw(2) << minute << ":"
         << setw(2) << second << " "
         << period
         << "      *    ";

    // Display 24-hour clock
    cout << "*        "
         << setw(2) << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second
         << "        *" << endl;

    cout << "***********************    ***********************" << endl;
}

// Function to display menu
void displayMenu() {

    cout << "***********************" << endl;
    cout << "* 1 - Add One Hour   *" << endl;
    cout << "* 2 - Add One Minute *" << endl;
    cout << "* 3 - Add One Second *" << endl;
    cout << "* 4 - Exit Program   *" << endl;
    cout << "***********************" << endl;
}

// Add one hour
void addHour(int& hour) {

    hour++;

    if (hour == 24) {
        hour = 0;
    }
}

// Add one minute
void addMinute(int& minute, int& hour) {

    minute++;

    if (minute == 60) {
        minute = 0;
        addHour(hour);
    }
}

// Add one second
void addSecond(int& second, int& minute, int& hour) {

    second++;

    if (second == 60) {
        second = 0;
        addMinute(minute, hour);
    }
}