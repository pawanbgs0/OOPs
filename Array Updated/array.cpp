#include "array.h"

Array::Array(int size)
{
    arr = new int[size];
    this->size = size;
}


Array::Array()
{
    size = 5;
    arr = new int[size];
}

ostream& operator<<(ostream& out, const Array& ob)
{

    out << "The elements of Array are: " << endl;
    for (int i = 0; i < ob.size; i++)
    {
        out << ob.arr[i] << " ";
    }

    return out;
}

Array Array::operator+(Array temp)
{
    Array temp2(this->size);

    for (int i = 0; i < temp.size; i++)
    {
        temp2.arr[i] = this->arr[i] + temp.arr[i];
    }

    return temp2;
}