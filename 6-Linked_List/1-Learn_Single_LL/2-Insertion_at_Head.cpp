
#include <bits/stdc++.h>
using namespace std;

// Node class for Node blueprint
class Node
{

public:
    int data;
    Node *next;

    Node() {}

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Insertion Function to insert at Head of LL

void insertAtHead(Node *&Head, int val)
{
    Node *temp = new Node(val);

    temp->next = Head;

    Head = temp;
}

void printLL(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *Head = new Node(10);

    int val = 9;
    insertAtHead(Head, val);
    insertAtHead(Head, 8);
    insertAtHead(Head, 7);

    printLL(Head);
    return 0;
}