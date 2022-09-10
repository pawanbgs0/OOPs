#include <iostream>
using namespace std;


class Array
{
    int* arr;
    int size;

    public:
        Array();
        Array(int size);
        ~Array();
        Array operator+(const Array &ob);
        friend ostream &operator<<(ostream &out, const Array &ob);
        friend istream &operator>>(istream &in, const Array &ob);
};

class Matrix
{
    int **arr;
    int row;
    int column;
    
    public:
        Matrix();
        void take_input();
        void display();
};