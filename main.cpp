// ============================================================================
// Course  : LDCW6123 - Fundamentals of Digital Competence for Programmer
// Project : Part 2 - Interactive C++ Program
// Topic   : Netflix Smart Content Recommender & Subscription Assistant
// Author  : Lee Wei Jin
// ============================================================================

#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Function Prototypes
void displayHeader();
void displayMainMenu();
void clearInputBuffer();

int main() {
    int choice = 0;

    displayHeader();

    // Main interactive loop
    do {
        displayMainMenu();
        cout << "Enter your choice (1-4): ";

        // Input validation: ensure user entered an integer
        if (!(cin >> choice)) {
            cout << "\n[!] Error: Invalid input! Please enter a number between 1 and 4.\n\n";
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1:
                cout << "\n[Notice] Module 1: Movie Recommendation Assistant (Coming soon in Stage 2)\n\n";
                break;
            case 2:
                cout << "\n[Notice] Module 2: Subscription Plan & Cost Calculator (Coming soon in Stage 3)\n\n";
                break;
            case 3:
                cout << "\n[Notice] Module 3: Netflix Disruptive Innovation Story (Coming soon in Stage 4)\n\n";
                break;
            case 4:
                cout << "\n=======================================================\n";
                cout << " Thank you for using Netflix Assistant. Enjoy streaming!\n";
                cout << "=======================================================\n";
                break;
            default:
                cout << "\n[!] Error: Invalid option selected! Please choose between 1 and 4.\n\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

// Function to print the system welcome header
void displayHeader() {
    cout << "===============================================================\n";
    cout << "       NETFLIX SMART RECOMMENDER & SUBSCRIPTION ASSISTANT      \n";
    cout << "       LDCW6123 Project - Disruptive Innovation in Streaming    \n";
    cout << "===============================================================\n\n";
}

// Function to display the main interactive menu options
void displayMainMenu() {
    cout << "------------------------- MAIN MENU ---------------------------\n";
    cout << "  1. Movie & TV Show Recommendation (Find what to watch)\n";
    cout << "  2. Netflix Subscription Advisor & Cost Calculator\n";
    cout << "  3. Netflix Disruptive Innovation Story (Part 1 Link)\n";
    cout << "  4. Exit Program\n";
    cout << "---------------------------------------------------------------\n";
}

// Utility function to clear the input stream on invalid entry
void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
