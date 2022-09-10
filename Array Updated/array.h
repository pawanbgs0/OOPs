#include <iostream> // istream + ostream
using namespace std;

class Array
{
    int* arr;
    int size;

    public:
        Array();
        Array(int size);
        Array(const Array& ob);
        Array operator+(Array temp);
        int give_size();
        friend ostream& operator<<(ostream& out, const Array& ob);
        friend istream& operator>>(istream& in, const Array& ob);
};
