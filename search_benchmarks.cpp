#include <iostream>
using namespace std;

int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main()
{
    const int SIZE = 20;
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int value;

    cout << "Value to be searched for: ";
    cin >> value;

    int linear = linearSearch(array, SIZE, value);
    int binary = binarySearch(array, SIZE, value);

    cout << linear << endl;
    cout << binary << endl;

    return 0;
}

int linearSearch(int arr[], int size, int val)
{
    bool found = false;
    int index = 0;
    int comp = 0;
    while(index < size && !found)
    {
        comp++;
        if (arr[index] == val)
        {
            found = true;
        }
        index++;
    }
    return comp;
}

int binarySearch(int arr[], int size, int val)
{
    int first = 0;
    bool found = false;
    int last = size - 1;
    int position = -1;
    int comp = 0;

    while(!found && first <= last)
    {
        int middle = (first + last) / 2;

        comp++;
        if (arr[middle] == val)
        {
            found = true;
            position = middle;
        }
        else if (arr[middle] > val)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return comp;
}