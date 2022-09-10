#include "ll.h"


Node::Node()
{
    this->next = NULL;
}

Node::Node(item value)
{
    this->next = NULL;
    this->data = value;
}

Linked_List::Linked_List()
{
    this->head = NULL;
}


void Linked_List::append(item data)
{
    Node* temp = new Node(data);
    Node* current = head;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
}


void Linked_List::display()
{
    Node* current = head;

    while (current != NULL)
    {
        cout << current->data << " ";

        current = current->next;
    }
    cout << endl;
}

ostream& operator<<(ostream& out, const Linked_List& ob)
{
    Node* current = ob.head;

    while (current != NULL)
    {
        out << current->data << " ";

        current = current->next;
    }
    out << endl;

    return out;
}

ostream& operator<<(ostream& out, const Node& ob)
{
    out << ob.data;

    return out;
}