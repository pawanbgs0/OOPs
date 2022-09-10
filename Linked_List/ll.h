#include <iostream>

using namespace std;

#define item int

class Linked_List;

class Node
{
    item data;
    Node* next;
    
    public:
        Node();
        Node(item value);
        friend Linked_List;
        friend ostream& operator<<(ostream& out, const Linked_List& ob);
        friend ostream& operator<<(ostream& out, const Node& ob);
};


class Linked_List
{
    Node* head;

    public:
        Linked_List();
        void append(item value);
        void display();
        friend ostream& operator<<(ostream& out, const Linked_List& ob);
        friend Node;
};