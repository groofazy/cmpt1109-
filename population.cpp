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

    for (int day = 1; day < num_days + 1; day++)
    {
        population += population * (pct / 100);

        cout << "Day " << day << "\t" << "Size of Population: " << population << endl;
    }
    return 0;
}