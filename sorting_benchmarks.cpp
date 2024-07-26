#include <iostream>
using namespace std;

int bubbleSort(long[], int);
int selectionSort(long[], int);

int main()
{
    const int SIZE = 18;

    long accounts1[SIZE] =
	{ 5658845,  4520125,  7895122,
	  8777541,  8451277,  1302850,
	  8080152,  4562555,  5552012,
	  5050552,  7825877,  1250255,
	  1005231,  6545231,  3852085,
	  7576651,  7881200,  4581002 };
    
    long accounts2[SIZE] = 
        { 5658845,  4520125,  7895122,
        8777541,  8451277,  1302850,
        8080152,  4562555,  5552012,
        5050552,  7825877,  1250255,
        1005231,  6545231,  3852085,
        7576651,  7881200,  4581002 };

    int bubble_comp = bubbleSort(accounts1, SIZE);
    int select_comp = selectionSort(accounts2, SIZE);

    cout << "Number of comparisions for Bubble Sort: " << bubble_comp;
    cout << endl;
    cout << "Number of comparisions for Selection Sort: " << select_comp;
}

int bubbleSort(long arr[], int size)
{
    int maxElement;
    int index;
    int comp = 0;

    for(maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for(index = 0; index < maxElement; index++)
        {
            if(arr[index] > arr[index+1])
            {
                swap(arr[index], arr[index + 1]);
                comp++;
            }
        }
    }
    return comp;
}

int selectionSort(long arr[], int size)
{
    int minIndex, minValue;
    int comp = 0;

    for (int start = 0; start < (size - 1); start++)
    {

        minIndex = start;
        minValue = arr[start];
        for (int index = start + 1; index < size; index++)
        {
            if (arr[index] < minValue)
            {
                minValue = arr[index];
                minIndex = index;
            }
        }
        swap(arr[minIndex], arr[start]);
        comp++;
    }
    return comp;
}
