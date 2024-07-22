#include <iostream>
using namespace std;

int bubbleSort(long[], int);
int selectionSort(long[], int);
int bubbleSort2(long values[], int size);

int main()
{
    const int SIZE = 20;

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

    long accounts3[SIZE] = 
        { 5658845,  4520125,  7895122,
        8777541,  8451277,  1302850,
        8080152,  4562555,  5552012,
        5050552,  7825877,  1250255,
        1005231,  6545231,  3852085,
        7576651,  7881200,  4581002 };

    int bubble_comp = bubbleSort(accounts1, SIZE);
    int select_comp = selectionSort(accounts2, SIZE);
    int bsort2 = bubbleSort2(accounts3, SIZE);

    cout << "Number of comparisions for Bubble Sort: " << bubble_comp;
    cout << endl;
    cout << "Number of comparisions for Selection Sort: " << select_comp;
    cout << endl;
    cout << "Number of comparisions for Bubble Sort 2: " << bsort2;
}

int bubbleSort(long arr[], int size)
{
    int maxElement;
    int index;
    int comp = 0;

    for(maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for(index = 0; index < size; index++)
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

int bubbleSort2(long values[], int size)
{
	bool swap;
	long temp;
	int  exchanges = 0;

	do
	{
		swap = false;   // No swaps made yet on this pass.

		for (int count = 0; count < (size - 1); count++)
		{
			if (values[count] > values[count + 1])
			{
				temp = values[count];
				values[count] = values[count + 1];
				values[count + 1] = temp;
				swap = true;
				exchanges++;
			}
		}

	} while (swap);  // Same as  while (swaps == true);

	return exchanges;
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