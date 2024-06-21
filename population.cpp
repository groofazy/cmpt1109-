#include <iostream>

using namespace std;

double population, pct, num_days, population_size;

int day;

int main()
{
    cout << "Starting # of organisms: ";
    cin >> population;
    while (population < 2)
    {
        cout << "Population must be 2 or greater, please try again";
        cin >> population;
    }
    cout << "Average daily percentage increase: ";
    cin >> pct;
    while (pct < 0)
    {
        cout << "Percentage must be positive, please try again";
        cin >> pct;
    }
    cout << "Number of days they will multiply: ";
    cin >> num_days;
    while (num_days < 1)
    {
        cout << "Days must be more than one, please try again";
        cin >> population;
    }

    for (int count = 0; count < num_days; count++)
    {
        day = count + 1;
        population_size = day * pct;

        cout << "Day " << day << "\t" << "Size of Population: " << population_size;
    }



}