#include<iostream>
using namespace std;

struct Stack
{
    int *arr;
    int size;
    int tos;

    public:
        Stack();
        Stack (int size);
        Stack (const Stack &ob);
        void push(int);
        void pop();
        int peek();
        bool isfull();
        bool isempty();
};
