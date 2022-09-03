#include <iostream>
using namespace std;

void add(int a, int b, int& answer)
{
    answer = a + b;
}



int main()
{
    int answer = 0;

    add(5, 4, answer);

    cout << answer << endl;
    return 0;
}