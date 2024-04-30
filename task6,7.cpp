#include <iostream>                                                       // Including the input-output stream header file
using namespace std;                                                      // Using the standard namespace
int main()   {                                                             // Start of the main function{
    float frh, cel;                                                       // Declaring floating-point variables for Fahrenheit and Celsius temperatures
    cout << "\n\n Convert temperature in Fahrenheit to Celsius :\n";      // Outputting a message indicating temperature conversion

        cout << "---------------------------------------------------\n";  // Outputting a separator line

        cout << " Input the temperature in Fahrenheit : ";                // Prompting the user to input the temperature in Fahrenheit

   cin >> frh;                                                            // Taking input for the Fahrenheit temperature from the user

            cel = ((frh * 5.0) - (5.0 * 32)) / 9;                         // Converting Fahrenheit to Celsius using the formula: (Fahrenheit - 32) * 5/9

     cout << " The temperature in Fahrenheit : " << frh << endl;          // Displaying the input temperature in Fahrenheit

     cout << " The temperature in Celsius : " << cel << endl;             // Displaying the converted temperature

    return 0 ;}
