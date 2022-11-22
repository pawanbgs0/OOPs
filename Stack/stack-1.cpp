#include<iostream>
using namespace std;

struct stack
{
    int *arr;
    int size,tos;
    public:
    void init(int);
    void push(int);
    void pop();
    int peek();
    bool isfull();
    bool isempty();
};

void stack :: init(int size)
{
    arr = new int[size];
    this -> size = size;
    tos = -1;
}

bool stack :: isempty()
{
    if(tos == -1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool stack :: isfull()
{
    if(tos == size -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void stack :: push(int element)
{
    if(isfull())
    {
        cout << "Sorry, Stack is already full,I am unable to put" << " : "<< element <<",inside the stack" << endl;
    }
    else
    {
        arr[++tos] = element;
    }
}

void stack :: pop()
{
    if(isempty())
    {
        cout << "Sorry, Stack is having nothing in it" << endl;
    }
    else
    {
        arr[tos--];
    }
}

int stack :: peek()
{
    if(isempty())
    {
        cout << "There is nothing inside it" << endl;
    }
    else
    {
        return arr[tos];
    }
}

int main()
{
    stack s1;
    s1.init(3);
    s1.push(2);
    s1.push(8);
    s1.push(6);
    s1.push(9);
    cout << "The Element at tos is:" <<s1.peek() << endl;
    s1.pop();
    cout << "The Element at tos is:" <<s1.peek() << endl;
    return 0;
}