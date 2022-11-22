#include "stack.h"


Stack :: Stack(int size)
{
    arr = new int[size];
    this -> size = size;
    tos = -1;
}


Stack :: Stack()
{
    arr = new int[5];
    this -> size = 5;
    tos = -1;
}

Stack::Stack (const Stack &ob)
{
    this->tos = ob.tos;
    this->size = ob.size;

    for (int i = 0; i < this->size - 1; i++)
    {
        this->arr[i] = ob.arr[i];
    }
}