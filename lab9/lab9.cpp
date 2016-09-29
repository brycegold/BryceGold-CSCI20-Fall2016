/*
** Created By: Bryce Gold
**
** Created On: 9/28/16
**
** This is the class for converting temperature between Kelvin, Fahrenheit, and
** Celsius by using their formulas. It takes in the temperature in one form and
** then outputs the corresponding other two along with original form.
*/

#include <iostream>

using namespace std;

class TemperatureConverter {
    public:
    
    // functions starting with "set" take in temp and assign it to respective variable, and calculate it into kelvin
    void SetTempFromKelvin(double kelvin)
    {
        kelvin_ = kelvin;
    }
    
    void SetTempFromCelsius(double celsius)
    {
        kelvin_ = celsius + 273.15;
        
        celsius_ = celsius;
    }
    
    void SetTempFromFahrenheit(double fahrenheit)
    {
        kelvin_ = (5 * (fahrenheit - 32) / 9) + 273.15;
        
        celsius_ = (5 * (fahrenheit - 32) / 9);
        
        fahrenheit_ = fahrenheit;
    }
    
    
    // functions starting with "get" return the value of the temperature mentioned in their name
    double GetTempFromKelvin()
    {
        return kelvin_;
    }
    
    double GetTempAsCelsius()
    {
        celsius_ = kelvin_ - 273.15;
        
        return celsius_;
    }
    
    double GetTempAsFahrenheit()
    {
        fahrenheit_ = ((celsius_ * 9) / 5 + 32);
        
        return fahrenheit_;
    }
    
    // default constructor sets kelvin_ to 0
    TemperatureConverter()
    {
        kelvin_ = 0;
    }
    
    // overloaded constructor that takes in a kelvin value and assigns to variable kelvin_
    TemperatureConverter(double kelvin)
    {
        kelvin_ = kelvin;
    }
    
    // outputs the temperatures in each of their forms
    void PrintTemperatures()
    {
        cout << "Kelvin: " << GetTempFromKelvin() << endl;
        cout << "Celsius: " << GetTempAsCelsius() << endl;
        cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
        cout << " " << endl;
    }
    
    private:
    
    // data members used for the conversion
    double kelvin_;
    
    double fahrenheit_;
    
    double celsius_;
    
};