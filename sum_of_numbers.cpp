// Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.

#include <iostream>

using namespace std;

int main()
{

    int num;
    int sum;
    int count;
    const int min_val = 0;

    do {
        cout << "Input a positive integer value: ";
        cin >> num;
    } while (num < min_val);

    for (count = 1; count <= num; count++)
    {
        sum += count;
    }

    cout << "The sum of numbers 1 - " << num << " is " << sum;

    return 0;
}