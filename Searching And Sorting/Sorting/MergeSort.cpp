// C++ program for Merge Sort
#include <iostream>
using namespace std;
// iska kam hai do sorted array ko sath me lana
void merge(int array[], int const left, int const mid, int const right)
{
    auto const subOne = mid - left + 1;
    auto const subTwo = right - mid;

    // inki life cylcle jyada nahai hai matlab ye temp hai
    auto *leftArray = new int[subOne],
         *rightArray = new int[subTwo];

    for (auto i = 0; i < subOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfsubOne = 0,
         indexOfsubTwo = 0;
    int indexOfMergedArray = left;

    while (indexOfsubOne < subOne && indexOfsubTwo < subTwo)
    {
        if (leftArray[indexOfsubOne] <= rightArray[indexOfsubTwo])
        {
            array[indexOfMergedArray] = leftArray[indexOfsubOne];
            indexOfsubOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfsubTwo];
            indexOfsubTwo++;
        }
        indexOfMergedArray++;
    }

    while (indexOfsubOne < subOne)
    {
        array[indexOfMergedArray] = leftArray[indexOfsubOne];
        indexOfsubOne++;
        indexOfMergedArray++;
    }

    while (indexOfsubTwo < subTwo)
    {
        array[indexOfMergedArray] = rightArray[indexOfsubTwo];
        indexOfsubTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(int array[], int const begin, int const end)
{
    // base case ye hai hamara
    if (begin >= end)
        return;

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
