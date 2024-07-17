#include <iostream>

using namespace std;

void selectionSort(int[], int);

int main()
{
    const int SIZE = 6;

    int values[SIZE] = {6,1,5,2,4,3};

    cout << "Unsorted Values:\n";
    for (auto element : values)
        cout << element << " ";
    cout << endl;

    selectionSort(values, SIZE);

    cout << "Sorted Values:\n";
    for (auto element : values)
        cout << element << " ";
    cout << endl;


    return 0;
}

void selectionSort(int array[], int size)
{
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }   
}