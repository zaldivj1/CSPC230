/*CPSC 230
 * Jacob Zaldivar
 * Lab2A
 * Finding Acceleration
 * */
#include <iostream>
#include <iomanip>
using namespace std;
const double MPHMPS = 1609.0/3600.0;
int main() {
//variables
double velocity;
double acceleration;
double time;
int newAcceleration;

//input
cout << "Please enter velocity in miles per hour:  ";
cin >> velocity;
cout << "\n";
cout << "Please enter time in seconds:  ";
cin >> time;


//calc
acceleration = (MPHMPS)*(velocity/time);

//rounding
acceleration *= 100;
acceleration += 0.5;
newAcceleration = static_cast<int>(acceleration);
acceleration = static_cast<double> (newAcceleration)/100;

//output
cout << "The acceleration required by a vehicle to reach a velocity of  " << velocity << "  miles per hour in  " << time << "  seconds is  " << acceleration << "  meters per second";

    return 0;
}