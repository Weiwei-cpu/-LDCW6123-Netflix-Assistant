#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Function Prototypes
void displayHeader();
void displayMainMenu();
void clearInputBuffer();
void handleRecommendation();
void handleSubscriptionCalculator();
void handleInnovationInsights();

int main() {
    int choice = 0; // Stores the user's menu selection

    displayHeader();

    // Main interactive loop
    do {
        displayMainMenu();
        cout << "Enter your choice (1-4): ";

        // Robust input validation: ensure user entered an integer
        if (!(cin >> choice)) {
            cout << "\n[!] Error: Invalid input! Please enter a numeric value (1-4).\n\n";
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1:
                handleRecommendation();
                break;
            case 2:
                handleSubscriptionCalculator();
                break;
            case 3:
                handleInnovationInsights();
                break;
            case 4:
                cout << "\n=======================================================\n";
                cout << " Thank you for using Netflix Assistant. Enjoy streaming!\n";
                cout << " Developed for LDCW6123 Digital Competence Project.\n";
                cout << "=======================================================\n";
                break;
            default:
                cout << "\n[!] Error: Out of range! Please choose an option from 1 to 4.\n\n";
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
    cout << "  3. Netflix Disruptive Innovation Story\n";
    cout << "  4. Exit Program\n";
    cout << "---------------------------------------------------------------\n";
}

// Utility function to clear the input stream on invalid entry
void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Module 1: Movie Recommendation based on Genre and Format preferences
void handleRecommendation() {
    int genreChoice = 0; // Stores the selected genre
    int formatChoice = 0; // Stores the selected viewing format

    cout << "\n===============================================================\n";
    cout << "          MODULE 1: PERSONALIZED CONTENT RECOMMENDER           \n";
    cout << "===============================================================\n";
    cout << "Select your preferred genre:\n";
    cout << "  1. Action & Thriller\n";
    cout << "  2. Sci-Fi & Cyberpunk\n";
    cout << "  3. Comedy & Feel-Good\n";
    cout << "  4. Drama & Romance\n";
    cout << "  5. Documentary & Tech\n";
    cout << "Choose a genre (1-5): ";

    if (!(cin >> genreChoice) || genreChoice < 1 || genreChoice > 5) {
        cout << "\n[!] Invalid genre selection. Returning to Main Menu.\n\n";
        clearInputBuffer();
        return;
    }

    cout << "\nSelect preferred viewing format:\n";
    cout << "  1. Quick Watch / Bingeable TV Series (30-50 min episodes)\n";
    cout << "  2. Full Feature Movie (90-150 min)\n";
    cout << "Choose format (1-2): ";

    if (!(cin >> formatChoice) || formatChoice < 1 || formatChoice > 2) {
        cout << "\n[!] Invalid format selection. Returning to Main Menu.\n\n";
        clearInputBuffer();
        return;
    }

    cout << "\n------------------ YOUR RECOMMENDED TITLE ---------------------\n";

    if (genreChoice == 1) { // Action
        if (formatChoice == 1) {
            cout << "Title       : Money Heist (La Casa de Papel)\n";
            cout << "Release     : 2017 - 2021 | Official IMDb Rating: 8.2/10\n";
            cout << "Type        : TV Series (5 Seasons) | Match Rating: 98%\n";
            cout << "Synopsis    : A criminal mastermind 'The Professor' plans the biggest\n";
            cout << "              heist in recorded history on the Royal Mint of Spain.\n";
        } else {
            cout << "Title       : Extraction 2\n";
            cout << "Release     : 2023 | Official IMDb Rating: 7.0/10\n";
            cout << "Type        : Movie (123 mins) | Match Rating: 94%\n";
            cout << "Synopsis    : Commando Tyler Rake embarks on another deadly mission\n";
            cout << "              to rescue a battered family from a ruthless gangster.\n";
        }
    } else if (genreChoice == 2) { // Sci-Fi
        if (formatChoice == 1) {
            cout << "Title       : Stranger Things\n";
            cout << "Release     : 2016 - Present | Official IMDb Rating: 8.7/10\n";
            cout << "Type        : TV Series (4 Seasons) | Match Rating: 97%\n";
            cout << "Synopsis    : In 1980s Indiana, a group of young friends uncover secret\n";
            cout << "              government experiments and a supernatural portal to the Upside Down.\n";
        } else {
            cout << "Title       : Interstellar\n";
            cout << "Release     : 2014 | Official IMDb Rating: 8.7/10\n";
            cout << "Type        : Movie (169 mins) | Match Rating: 96%\n";
            cout << "Synopsis    : A team of explorers travel through a wormhole in space\n";
            cout << "              in an attempt to ensure humanity's survival.\n";
        }
    } else if (genreChoice == 3) { // Comedy
        if (formatChoice == 1) {
            cout << "Title       : Brooklyn Nine-Nine\n";
            cout << "Release     : 2013 - 2021 | Official IMDb Rating: 8.4/10\n";
            cout << "Type        : TV Comedy Series (8 Seasons) | Match Rating: 95%\n";
            cout << "Synopsis    : Hilarious antics of a quirky NYPD detective squad led\n";
            cout << "              by Captain Raymond Holt.\n";
        } else {
            cout << "Title       : Red Notice\n";
            cout << "Release     : 2021 | Official IMDb Rating: 6.3/10\n";
            cout << "Type        : Movie (118 mins) | Match Rating: 92%\n";
            cout << "Synopsis    : An FBI profiler pursues the world's most wanted art thief\n";
            cout << "              in a globe-trotting action-comedy adventure.\n";
        }
    } else if (genreChoice == 4) { // Drama & Romance
        if (formatChoice == 1) {
            cout << "Title       : Crash Landing on You\n";
            cout << "Release     : 2019 - 2020 | Official IMDb Rating: 8.7/10\n";
            cout << "Type        : K-Drama Series (16 Episodes) | Match Rating: 99%\n";
            cout << "Synopsis    : A South Korean heiress accidentally paraglides into\n";
            cout << "              North Korea and falls in love with an army officer.\n";
        } else {
            cout << "Title       : La La Land\n";
            cout << "Release     : 2016 | Official IMDb Rating: 8.0/10\n";
            cout << "Type        : Movie (128 mins) | Match Rating: 93%\n";
            cout << "Synopsis    : A dedicated musician and an aspiring actress struggle\n";
            cout << "              to reconcile their aspirations with their romance.\n";
        }
    } else if (genreChoice == 5) { // Documentary
        if (formatChoice == 1) {
            cout << "Title       : Formula 1: Drive to Survive\n";
            cout << "Release     : 2019 - Present | Official IMDb Rating: 8.5/10\n";
            cout << "Type        : Docuseries (6 Seasons) | Match Rating: 96%\n";
            cout << "Synopsis    : Exclusive behind-the-scenes drama and high-speed battles\n";
            cout << "              inside the Formula One World Championship.\n";
        } else {
            cout << "Title       : The Social Dilemma\n";
            cout << "Release     : 2020 | Official IMDb Rating: 7.6/10\n";
            cout << "Type        : Documentary (94 mins) | Match Rating: 95%\n";
            cout << "Synopsis    : Tech insiders reveal how social media platforms reprogram\n";
            cout << "              civilization with dangerous algorithmic consequences.\n";
        }
    }

    cout << "---------------------------------------------------------------\n\n";
}

// Module 2: Netflix Subscription Plan Advisor & Billing Calculator
void handleSubscriptionCalculator() {
    int planChoice = 0; // Stores the selected subscription plan
    int months = 0;
    char isTelcoBundle = 'n';
    double monthlyRate = 0.0;
    string planName = "";
    int screensAllowed = 0;
    string resolution = "";

    cout << "\n===============================================================\n";
    cout << "      MODULE 2: NETFLIX PLAN ADVISOR & COST CALCULATOR         \n";
    cout << "===============================================================\n";
    cout << "Available Plans (Official Netflix Malaysia Rates - Updated 2026):\n";
    cout << "  1. Mobile Plan   - RM 19.90/mo (480p SD, 1 phone/tablet)\n";
    cout << "  2. Basic Plan    - RM 33.90/mo (720p HD, 1 screen at a time)\n";
    cout << "  3. Standard Plan - RM 55.90/mo (1080p Full HD, 2 screens)\n";
    cout << "  4. Premium Plan  - RM 69.90/mo (4K UHD + Spatial Audio, 4 screens)\n";
    cout << "Select your desired plan (1-4): ";

    if (!(cin >> planChoice) || planChoice < 1 || planChoice > 4) {
        cout << "\n[!] Error: Invalid plan selection. Returning to Main Menu.\n\n";
        clearInputBuffer();
        return;
    }

    switch (planChoice) {
        case 1:
            planName = "Mobile";
            monthlyRate = 19.90;
            screensAllowed = 1;
            resolution = "480p Standard Definition (SD)";
            break;
        case 2:
            planName = "Basic";
            monthlyRate = 33.90;
            screensAllowed = 1;
            resolution = "720p High Definition (HD)";
            break;
        case 3:
            planName = "Standard";
            monthlyRate = 55.90;
            screensAllowed = 2;
            resolution = "1080p Full High Definition (FHD)";
            break;
        case 4:
            planName = "Premium";
            monthlyRate = 69.90;
            screensAllowed = 4;
            resolution = "4K Ultra HD (UHD) + Spatial Audio";
            break;
    }

    cout << "Enter subscription duration in months (1-12): ";
    if (!(cin >> months) || months < 1 || months > 12) {
        cout << "\n[!] Error: Duration must be between 1 and 12 months.\n\n";
        clearInputBuffer();
        return;
    }

    cout << "Subscribed via Malaysian Telco partner bundle (Astro / Unifi / Maxis)? (y/n): ";
    while (cin >> isTelcoBundle && 
           isTelcoBundle != 'y' && isTelcoBundle != 'Y' && 
           isTelcoBundle != 'n' && isTelcoBundle != 'N') {
        clearInputBuffer();
        cout << "[!] Invalid input. Please enter 'y' for Yes or 'n' for No: ";
    } 
    clearInputBuffer();

    double subtotal = monthlyRate * months;
    double discount = 0.0;

    if (isTelcoBundle == 'y' || isTelcoBundle == 'Y') {
        discount = subtotal * 0.10; // 10% Telco Fiber bundle rebate
    }

    double totalAmount = subtotal - discount;
    double costPerScreen = totalAmount / (screensAllowed * months);

    cout << fixed << setprecision(2);
    cout << "\n--------------------- BILLING ESTIMATE ------------------------\n";
    cout << "Selected Plan     : Netflix " << planName << " Plan\n";
    cout << "Supported Quality : " << resolution << "\n";
    cout << "Simultaneous Screens: " << screensAllowed << " Screen(s)\n";
    cout << "Subscription Time : " << months << " Month(s)\n";
    cout << "Monthly Fee       : RM " << monthlyRate << "\n";
    cout << "Subtotal          : RM " << subtotal << "\n";
    if (discount > 0.0) {
        cout << "Partner Rebate    : - RM " << discount << " (10% Telco Bundle Rebate Applied)\n";
    }
    cout << "TOTAL PAYABLE     : RM " << totalAmount << "\n";
    cout << "Effective Cost    : RM " << costPerScreen << " per screen / month\n";
    cout << "Market Fact       : Netflix officially offers zero student discounts globally;\n";
    cout << "                    rebates are exclusively via ISP/Telco home fiber bundles.\n";
    cout << "---------------------------------------------------------------\n\n";
}

// Module 3: Netflix Disruptive Innovation Insights 
void handleInnovationInsights() {
    int subChoice = 0;

    cout << "\n===============================================================\n";
    cout << "    MODULE 3: NETFLIX INNOVATION LIFE CYCLE (PART 1 LINK)      \n";
    cout << "===============================================================\n";
    cout << "Explore how Netflix transformed home entertainment:\n";
    cout << "  1. Clayton Christensen's Disruptive Innovation Model\n";
    cout << "  2. Traditional Rental (Blockbuster) vs. Streaming (Netflix)\n";
    cout << "  3. Supervening Social & Technological Necessities\n";
    cout << "Select insight topic (1-3): ";

    if (!(cin >> subChoice) || subChoice < 1 || subChoice > 3) {
        cout << "\n[!] Error: Invalid selection. Returning to Main Menu.\n\n";
        clearInputBuffer();
        return;
    }

    cout << "\n------------------- INNOVATION BRIEFING -----------------------\n";
    if (subChoice == 1) {
        cout << "[DISRUPTIVE INNOVATION MODEL (Clayton Christensen)]\n";
        cout << "- 1997            : Inception as DVD-by-mail service with NO late fees.\n";
        cout << "- Low-End Foothold: Targeted inconvenient video-store renters.\n";
        cout << "- 2007            : Introduced On-Demand Digital Streaming technology.\n";
        cout << "- Disruption      : Overtook incumbents by moving upmarket into original\n";
        cout << "                    content production (House of Cards, Stranger Things).\n";
    } else if (subChoice == 2) {
        cout << "[BLOCKBUSTER (INCUMBENT) vs NETFLIX (DISRUPTOR)]\n";
        cout << "Feature              Blockbuster              Netflix\n";
        cout << "---------------------------------------------------------------\n";
        cout << "Business Model       Physical Brick-and-Mortar Cloud Streaming\n";
        cout << "Late Return Fees     Heavily penalized users  Zero late fees\n";
        cout << "Content Catalog      Limited shelf space      Virtually unlimited\n";
        cout << "Recommendation       Human staff assistance   Machine learning AI\n";
    } else if (subChoice == 3) {
        cout << "[SUPERVENING SOCIAL & TECHNOLOGICAL NECESSITIES]\n";
        cout << "1. High-Speed Broadband Adoption worldwide.\n";
        cout << "2. Shift to mobile digital smart devices (Smartphones, Smart TVs).\n";
        cout << "3. Consumer demand for instant, on-demand gratification.\n";
        cout << "4. Cloud computing infrastructure (AWS) enabling global scale.\n";
    }
    cout << "---------------------------------------------------------------\n\n";
}
