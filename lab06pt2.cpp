#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    double input = 0;
    int lower = 0;
    double sum = 0;
    double real_num;


    // cout << "Enter a non-negative number (Enter a negative number to end): ";
    // cin >> input;

    while (input != -1)
    {
        cout << "Enter a non-negative number (Enter a negative number to end): ";
        cin >> input;

        if (input < lower)
        {
            double avg = sum / count;

            cout << "Sum of numbers you entered is " << sum << endl;
            cout << "The average of numbers you entered is " << avg << endl;

        }

        sum += input;
        count++;
    }

    return 0;
}

