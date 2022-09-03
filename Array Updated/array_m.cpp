#include "array.h"

int main()
{
    int size_array;

    cout << "Give the size of Array: ";
    cin >> size_array;

    Array a1(size_array);
    Array a2(size_array);
    Array res(size_array);

    // a1.take_input();
    cout << "A1 INPUT OVER" << endl;
    // a2.take_input();
    cout << "A2 INTPUT OVER" << endl;

    res = a1 + a2;

    cout << res;



    return 0;
}