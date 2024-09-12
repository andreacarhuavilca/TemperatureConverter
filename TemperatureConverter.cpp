// TemperatureConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

    float farenheit, celsius;


    cout << "Please enter temperature in Celsius" << endl;
    cin >>celsius;

    farenheit = (celsius) * 9 / 5 + 32;

    cout << "Temperature in Farenheit is: " << farenheit << endl;

    return 0;
}