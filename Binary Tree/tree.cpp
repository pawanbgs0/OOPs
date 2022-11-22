#include "tree.h"

Node::Node()
{
    this->left = NULL;
    this->right = NULL;

    this->data = 0;
}


Node::Node(item value)
{
    this->left = NULL;
    this->right = NULL;

    this->data = value;
}


Tree::Tree()
{
    this->root = NULL;
}


Tree::Tree(item value)
{
    this->root = NULL;
    this->root->data = value;
}


void Tree::temp_create_tree()
{
    root = new Node(10);

    root->left = new Node(15);
    root->right = new Node(16);

    root->left->left = new Node(17);
    root->left->right = new Node(20);

    root->right->right = new Node(23);
}


void Tree::pre_order_worker(Node* ptroot)
{
    if (ptroot == NULL)
        return;

    cout << ptroot->data << " ";

    pre_order_worker(ptroot->left);
    pre_order_worker(ptroot->right);
}


void Tree::pre_order()
{
   this->pre_order_worker(this->root);
}


void Tree::in_order_worker(Node* ptroot)
{
    if (ptroot == NULL)
        return;

    in_order_worker(ptroot->left);
    cout << ptroot->data << " ";
    in_order_worker(ptroot->right);
}


void Tree::in_order()
{
    this->in_order_worker(this->root);
}