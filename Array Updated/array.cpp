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


Array::Array(const Array &ob)
{
    // for (int i = 0; i < ob.size; i++)
    // {
    //     this->arr[i] = ob.arr[i];
    // }
    this->arr = ob.arr;
    this->size = ob.size;
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


istream &operator>>(istream &in, const Array &ob)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value at " << i << "th Position: ";
        in >> ob.arr[i];
    }
    return in;
}

Array Array::operator+(Array temp)
{
    for (int i = 0; i < temp.size; i++)
    {
        this->arr[i] = this->arr[i] + temp.arr[i];
    }

    return *this;
}



int Array::give_size()
{
    return this->size;
}