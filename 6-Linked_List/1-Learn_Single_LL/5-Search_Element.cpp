
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

int getCount(Node *head)
{

    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
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

bool searchKey(int n, Node *head, int key)
{

    int i = 1;

    Node *temp = head;

    while (i <= n)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
        i++;
    }
    return false;
}
int main()
{

    Node *Head = new Node(10);

    int val = 9;
    insertAtHead(Head, val);
    insertAtHead(Head, 8);
    insertAtHead(Head, 7);

    printLL(Head);
    cout << endl
         << getCount(Head) << endl;

    int n = getCount(Head);

    int x = 8;
    cout << searchKey(n, Head, x);

    return 0;
}