#include <iostream>
using namespace std;

void add(int a, int b, int& answer)
{
    answer = a + b;
}


int main()
{
    int answer = 0;
    string st = "Pawan";
    string st2 = " Kumar";
    string st3 = st;

    cout << st3.size();
   
    return 0;
}