
#include <iostream>
using namespace std;

int insertionSort(int arr[], int size)
{
    int shifts = 0;

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }

        arr[j + 1] = key;
    }

    return shifts;
}

int main()
{
    int arr[5] = {23, 11, 45, 8, 30};

    int shifts = insertionSort(arr, 5);

    cout << "Sorted: ";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << "\nShifts: " << shifts;

    return 0;
}
