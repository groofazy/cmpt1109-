// Running on a particular treadmill you burn 3.6 calories per minute. Write a program that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.

#include <iostream>

using namespace std;

int main()
{

    double burned_cals = 3.6;
    int min_intervals = 5;
    int count, minutes;

    for (count = 1; count < 7; count++)
    {
        minutes = count * 5;
        cout << "Minute: " << minutes << "\t" << "Calories Burned: " << burned_cals * minutes << endl; 
    }

    return 0;
}