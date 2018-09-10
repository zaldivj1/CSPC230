#include <iostream>
#include <string>
using namespace std;
int main() {
   //Variables
   int Bottles = 12;
   int daysPerYear = 365;
   double Cases;
   double storeProfit = 0.20;
   double profitPerDay;
   double profitPerYear;
   double profitPerCases2;
   //Calculations
   cout << "Enter how many cases";
   cin >> Cases;
   profitPerDay = (Bottles * Cases) * storeProfit;
   profitPerYear = profitPerDay * daysPerYear;
   //Display
   cout << "Profit per day\n";
   cout << profitPerDay;
   cout << "\n";
   cout << "Profit per year\n";
   cout << profitPerYear;

    return 0;
}