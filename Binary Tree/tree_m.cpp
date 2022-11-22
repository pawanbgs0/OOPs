#include "tree.h"

int main()
{
    Tree t1;

    t1.temp_create_tree();
    t1.pre_order();
    cout << endl;
    t1.in_order();

    return 0;
}