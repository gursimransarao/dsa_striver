
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
    if (head == NULL)
    {
        cout << "Head is pointing to NULL";
    }
    else
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

// Deleting the node
// iska ek acha question kiaa tha on striver, check that out
void deleteNode(Node *&Head)
{
    // Case 1: Empty list
    if (Head == NULL)
    {
        cout << "List is empty, nothing to delete" << endl;
        return;
    }

    // Case 2: List has only one node
    if (Head->next == NULL)
    {
        delete Head; // delete deletes the node to which the pointer is pointing to
        Head = NULL; // after deleting the node, now we can point pointer to NULL
        cout << "\nLast node deleted, list is now empty" << endl;
        return;
    }

    // Case 3: List has more than one node
    Node *temp = Head;

    // Traverse to the second last node
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Delete the last node
    Node *lastNode = temp->next;
    temp->next = NULL; // Remove link to the last node
    delete lastNode;
}

int main()
{

    Node *Head = new Node(10);

    int val = 9;
    insertAtHead(Head, val);
    insertAtHead(Head, 8);
    insertAtHead(Head, 7);

    printLL(Head); // 7,8,9,10
    deleteNode(Head);
    cout << endl;
    printLL(Head);

    deleteNode(Head); // 7,8,9
    cout << endl;
    printLL(Head);

    deleteNode(Head); // 7,8
    cout << endl;
    printLL(Head);

    deleteNode(Head); // 7
    cout << endl;
    printLL(Head);

    deleteNode(Head);

    cout << "jhkadfsllkasf";
    cout << endl
         << "last";
    printLL(Head);

    return 0;
}
