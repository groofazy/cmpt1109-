// Sales prediction

#include <iostream>

using namespace std;
int main()
{
    
    int num_days;
    int total = 5;
    int min_value = 1;
    int count;
    int salary = 1;

    cout << "Enter the number of days: ";
    cin >> num_days;

    while (num_days < min_value)
    {
        cout << "The number of days must be at least one" << endl;
        cout << "Enter the number of days: ";
        cin >> num_days;
    }

    while (num_days > 0)
    {
        cout << "Day " << min_value++ << "\t$" << salary << endl;

        total += salary;
        salary *= 2;
        num_days--;
    }

    cout << "Total = " << total << endl;


    return 0;
}