#include <bits/stdc++.h>
using namespace std;


void bubble_sort(int* arr, int no_of_elements)
{
    bool is_swapped = false;

    for (int i = 0; i < no_of_elements - 1; i++)
    {
        is_swapped = false;

        for (int j = 0; j < no_of_elements - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                is_swapped = true;
            }
        }

        if (is_swapped == false)
            break;
    }
}


int main()
{
    int arr[] = {2,5,4,1,2,3};

    bubble_sort(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

