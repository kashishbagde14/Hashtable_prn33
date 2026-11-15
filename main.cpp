/*
 * Data Structures - Internal Activity 3, Question 2
 * PRN: 202501100033
 * Scenario: Mango Varieties
 * Seed: 33
 * Hash Function: Mid-Square Method
 * Collision Handling: Separate Chaining
 */

#include <iostream>
#include <string>
using namespace std;

const int M = 10;
const int N = 20;
const int SEED = 33;

// Mango variety names
const string NAMES[N] = {
    "Alphonso", "Kesar", "Dasheri", "Langra", "Totapuri",
    "Chausa", "Banganapalli", "Neelam", "Himsagar", "Mallika",
    "Amrapali", "Raspuri", "Badami", "Fazli", "Safeda",
    "Malgova", "Ratna", "Pairi", "Rajapuri", "Sindhura"
};

int main() {
    cout << "Mango Variety Hash Table" << endl;
    cout << "PRN: 202501100033" << endl;
    cout << "Seed: " << SEED << endl;
    cout << "Table Size: " << M << endl;

    return 0;
}