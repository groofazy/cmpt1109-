// Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays a table showing the number of millimeters that the ocean will have risen each year for the next 25 years.

#include <iostream>

using namespace std;

int main()
{
    const double ocean_level = 1.5;
    const int years = 25;
    double ocean_rise;
    int count;

    for (count = 1; count <= years; count++)
    {
        ocean_rise = ocean_level * count;
        
        cout << "Year " << count << " Ocean Level " << ocean_rise << "mm" << endl;
    }

    return 0;
}