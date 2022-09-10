#include "ll.h"

using namespace std;

int main()
{
    Linked_List ll;
    Node n1(50);

    for (int i = 0; i < 5; i++)
    {
        ll.append(i * 10);
    }

    cout << ll;
    // cout << "Node item " << n1;

    return 0;
}