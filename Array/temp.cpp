#include <iostream>
using namespace std;


class Parry
{
    int num1; // = 5

    public:
        Parry();
        Parry(int number);
        int add (int num1);
};


int main()
{
    Parry v1(5);

    int res;
    
    // v1.init(5);

    res = v1.add(4);

    cout << res << endl;

    return 0;
}

int Parry::add (int num1) // 4
{
    // int num1
    return this->num1 + num1;
}

Parry::Parry(int number)
{
    num1 = number;
}

Parry::Parry()
{
    num1 = 0;
}