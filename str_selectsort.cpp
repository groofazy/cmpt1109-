#include <iostream>
#include <string>

void selectionSort(string[], int);
void showArray(string[], int);

using namespace std;
int main()
{
    const int SIZE = 10;
    string arr[SIZE] = {"Toji", "Nobara", "Yuta", "Chiikawa", "Hachiware", "Usagi", "Denji", "Shinji", "Megumi", "Yoshi"};

    cout << "This is the string unsorted\n";
    showArray(arr, SIZE);

    return 0;
}

void selectionSort(string arr[], int size)
{
    int minIndex;
    string minVal;

    for(int start = 0; start < (size - 1); start++) // 
    {
        minIndex = start; // setting index value to 0
        minVal = arr[start]; // lowest val word assigned at arr[0]
        for (int index = start + 1; index < size; index++)
        {
            if (arr[index] < minVal) // if instance to set new minVal
            {
                minVal = arr[index]; // init minVal to newest low val
                minIndex = index; // lowest index = index of 
            }
        }
        swap(arr[minIndex], arr[start]); // swap 
    }
}

void showArray(string arr[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << arr[index] << ", ";
    }
}
