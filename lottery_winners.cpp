#include <iostream>
using namespace std;

int linearSearch(int[], int, int);
int main()
{
    const int SIZE = 10;
    int lotto_num[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int winning_num;

    cout << "Enter this week's winning 5-digit number: ";
    cin >> winning_num;

    int search = linearSearch(lotto_num, SIZE, winning_num); 

    if (search == -1)
    {
        cout << "Number is not a winner this week, try again next time!";
    }
    else 
    {
        cout << "Number is a winner!"; 
    }

    return 0;
}

int linearSearch(int arr[], int size, int val)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (arr[index] == val)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}