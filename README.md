# Netflix Smart Content Recommender & Subscription Assistant
> **Course**: LDCW6123 - Fundamentals of Digital Competence for Programmer  
> **Component**: Part 2 - Interactive C++ Program  
> **Student Author**: Lee Wei Jin  
> **Technology Topic**: Netflix (Disruptive Innovation in Digital Media Streaming)

---

## 1. Project Overview & Part 1 Connection
This interactive C++ console application is designed to accompany **Part 1: Innovation Technology Life Cycle Poster**. 

The program models Netflix's core digital innovations that disrupted the traditional home video rental industry (such as Blockbuster):
1. **Algorithmic Content Recommendation**: Simulates Netflix's personalized recommendation engine based on user genre preference and viewing format (quick TV series binge vs. feature films).
2. **Flexible Subscription & Cost Advisor**: Simulates Netflix's tiered pricing model (Mobile, Basic, Standard, Premium) with official Malaysian rates, customizable durations, and telco partner bundle rebates.
3. **Disruptive Innovation Factsheet**: Outlines key concepts from **Clayton Christensen's Disruptive Innovation Model**, illustrating how Netflix leveraged high-speed broadband and on-demand streaming to displace traditional brick-and-mortar video rental stores.

---

## 2. Program Structure & Features
The program is modularized into dedicated functions:
- `displayHeader()` / `displayMainMenu()`: Professional user interface layout.
- `handleRecommendation()`: Processes multi-criteria choices to recommend high-rated titles.
- `handleSubscriptionCalculator()`: Calculates subscription pricing, ISP/Telco fiber partner rebates, and per-screen shared costs.
- `handleInnovationInsights()`: Interactive theoretical briefing directly linked to Part 1 rubric requirements.
- `clearInputBuffer()`: Robust error handling preventing program termination on invalid user input.

---

## 3. How to Compile and Run

### Using GCC / G++ (Terminal / MinGW / VS Code)
```bash
# Compile
g++ -o netflix_assistant main.cpp

# Run on Windows
.\netflix_assistant.exe
```

### Using Online Compilers (e.g., OnlineGDB / Replit)
1. Copy the contents of `main.cpp`.
2. Paste into [OnlineGDB C++](https://www.onlinegdb.com/online_c++_compiler).
3. Click **Run**.

---

## 4. Test Scenarios
- **Scenario A (Recommendation)**: Select Genre `1` (Action) -> Format `2` (Movie) -> Output: *Extraction 2 (94% match)*.
- **Scenario B (Subscription)**: Select Plan `3` (Standard RM 55.90) -> 3 Months -> Telco Partner `y` -> Output: Subtotal RM 167.70, Rebate RM 16.77, Total RM 150.93.
- **Scenario C (Invalid Input)**: Enter invalid text `abc` or numbers outside `1-4` -> System displays friendly error message and prompts user again without crashing.
