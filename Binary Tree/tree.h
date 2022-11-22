#include <iostream>
using namespace std;

#define item int

class Tree;


class Node
{
    Node* left;
    Node* right;
    item data;
    
    public:
        Node();
        Node(item value);
        friend Tree;

};

class Tree
{
    Node* root;
    void pre_order_worker(Node* ptroot);
    void in_order_worker(Node* ptroot);

    public:
        Tree();
        Tree(item value);
        void temp_create_tree();
        void pre_order();
        void in_order();
};