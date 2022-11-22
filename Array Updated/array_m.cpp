#include "array.h"

int main()
{
    int size_array;

    cout << "Give the size of Array: ";
    cin >> size_array;

    Array a1(size_array);
    Array a2(size_array);

    Array p, q;

    /*kjdhfksdhfkjsdhf*/ //stored in p


    q = p;

    cin >> a1;
    cout << a1;

    a2 = a1;

    cout << a2;
   
    cout << a2.give_size();

    return 0;
}