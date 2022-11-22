#include <iostream>
using namespace std;

void merge_two_sorted_array(int* arr, int startIndex, int midIndex, int lastIndex)
{
    int i = startIndex;
    int j = midIndex + 1;
    int *res = new int[lastIndex + 1];
    int k = 0;

    while (i <= midIndex && j <= lastIndex)
    {
        if (arr[i] < arr[j])
        {
            res[k] = arr[i];
            i++;
            k++;
        }
        else 
        {
            res[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= midIndex)
    {
        res[k] = arr[i];
        k++;
        i++;
    }

    while (j <= lastIndex)
    {
        res[k] = arr[j];
        j++;
        k++;
    }


    for (int i = startIndex, k = 0; i <= lastIndex; i++)
    {
        arr[i] = res[k];
        k++;
    }
}

void merge_sort(int* arr, int startIndex, int lastIndex)
{
    if (startIndex >= lastIndex)
        return;

    int midIndex = (startIndex + lastIndex) / 2;

    merge_sort(arr, startIndex, midIndex);
    merge_sort(arr, midIndex + 1, lastIndex);

    merge_two_sorted_array(arr, startIndex, midIndex, lastIndex);
}


int main()
{
    int arr[] = {7,6,5,4,3,2};

    merge_sort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
