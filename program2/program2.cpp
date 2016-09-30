/*
** Bryce Gold
**
** 9/30/16
**
** This program converts one unit of distance into another unit of distance. It
** can take in miles, yards, inches, and meters. It can convert miles to all other
** measures; meters to miles; yards to feet; and inches to meters.
*/


#include <iostream>
#include <string>

using namespace std;

class DistanceConverter
{
    public:
    
    // mutators that convert one unit to another unit
    void setMilesToFeet(int miles)
    {
        distance = miles * 5280;
    }
    
    void setMilesToInches(int miles)
    {
        distance = miles * 63360;
    }
    
    void setMilesToMeters(int miles)
    {
        distance = miles * 1609.344;
    }
    
    void setMilesToYards(int miles)
    {
        distance = miles * 1760;
    }
    
    void setMetersToMiles(int meters)
    {
        distance = meters / 1609.344;
    }
    
    void setYardsToFeet(int yards)
    {
        distance = yards * 3;
    }
    
    void setInchesToMeters(int inches)
    {
        distance = inches *  0.0245;
    }
    
    // accessor that returns the converted distance
    double getDistance()
    {
        return distance;
    }
    
    // prints the converted distance
    void printDistance()
    {
        cout <<  getDistance() << endl;
        cout << " " << endl;
    }
    
    // default constructor
    DistanceConverter()
    {
        distance = 0;
    }
    
    // constructor that prints out a string stating the units being converted
    DistanceConverter(string firstDistance, string convertedDistance)
    {
        cout << "That was " << firstDistance << " being converted into " << convertedDistance << endl;
    }
    
    private:
    
    double distance;
};

int main() 
{
    // Tests the default constructor
    DistanceConverter distance0;
    distance0.printDistance();
    
    // prints out the line stating units; converts the unit; prints the final value 
    DistanceConverter distance1("1 mile", "feet");
    distance1.setMilesToFeet(1);
    distance1.printDistance();
    
    DistanceConverter distance2("1 mile", "inches");
    distance2.setMilesToInches(1);
    distance2.printDistance();
    
    DistanceConverter distance3("1 mile", "meters");
    distance3.setMilesToMeters(1);
    distance3.printDistance();
    
    DistanceConverter distance4("1 mile", "yards");
    distance4.setMilesToYards(1);
    distance4.printDistance();
    
    DistanceConverter distance5("16 meters", "miles");
    distance5.setMetersToMiles(16);
    distance5.printDistance();
    
    DistanceConverter distance6("20 yards", "feet");
    distance6.setYardsToFeet(20);
    distance6.printDistance();
    
    DistanceConverter distance7("100 inches", "meters");
    distance7.setInchesToMeters(100);
    distance7.printDistance();
    
    DistanceConverter distance8("1 meter", "miles");
    distance8.setMetersToMiles(1);
    distance8.printDistance();
}