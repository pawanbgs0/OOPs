#include "array.h"

int main()
{
    int size_array;

    cout << "Give the size of Array: ";
    cin >> size_array;

    Array (a1size_array);
    Array a2(size_array);
    Array res(size_array);

    cin >> a1;
    cout << "A1 INPUT OVER" << endl;
    cin >> a2;
    cout << "A2 INTPUT OVER" << endl;

    res = a1 + a2;
    
    cout << "Res is: ";
    cout << res;

    cout << "a1 is: ";
    cout << a1;

    cout << "a2 is: ";
    cout << a2;

    return 0;
}