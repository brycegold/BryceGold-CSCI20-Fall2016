/*
** Created By: Bryce Gold
**
** Created On: 9/28/16
**
** This is the class for converting temperature between Kelvin, Fahrenheit, and
** Celsius by using their formulas. It takes in the temperature in one form and
** then outputs the corresponding other two.
*/

#include <iostream>

using namespace std;

class TemperatureConverter {
    public:
    
    // functions starting with "set" are the 
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
    
    
    TemperatureConverter()
    {
        kelvin_ = 0;
    }
    
    TemperatureConverter(double kelvin)
    {
        kelvin_ = kelvin;
    }
    
    void PrintTemperatures()
    {
        cout << "Kelvin: " << GetTempFromKelvin() << endl;
        cout << "Celsius: " << GetTempAsCelsius() << endl;
        cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
        cout << " " << endl;
    }
    
    private:
    double kelvin_;
    
    double fahrenheit_;
    
    double celsius_;
    
};