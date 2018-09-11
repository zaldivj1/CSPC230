/*
 *Lab Practice 2    CPSC 230TR     9/4/2018
 *Jacob Zaldivar
 *Practice 2
 *Convert Fahrenheit to Celsius
 */

#include <iostream>
#include <string>
using namespace std;
int main() {
    //variables
    double fahrenheit;
    double celsius;
    string name;

    //Input
    cout<<"Please insert name\n";
    cin>> name;
    cout<<"Please enter temperature in degrees fahrenheit\n";
    cin>> fahrenheit;

    //Calculations
    celsius=5.0/9.0*(fahrenheit-32.0);

    //Output
    cout<<"Hi  "<< name;
    cout<<"  The equivalent to  "<< fahrenheit <<"  degrees fahrenheit is  "<< celsius <<"  degrees celsius";

    return 0;
}
