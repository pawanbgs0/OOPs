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


Array::~Array()
{
    delete this->arr;
}

Array Array::operator+(const Array &ob)
{
    // Array res(this->size);

    for (int i = 0; i < this->size; i++)
    {
        this->arr[i] = this->arr[i] + ob.arr[i];
    }

    return *this;
}

ostream &operator<<(ostream &out, const Array &ob)
{
    out << "The Elements of Array is: " << endl;

    for (int i = 0; i < ob.size; i++)
    {
        out << ob.arr[i] << " ";
    }
    
    out << endl;

    return out;
}

istream &operator>>(istream &in, const Array &ob)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value at " << i << "th Position: ";
        in >> ob.arr[i];
    }

    return in;
}