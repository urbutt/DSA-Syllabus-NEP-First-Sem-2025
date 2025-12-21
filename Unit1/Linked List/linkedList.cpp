/*
 * - A linked list is a linear data structure where elements, called nodes,
 * are connected using pointers. Each node contains two parts: the data and
 * a reference (or pointer) to the next node in the sequence. Unlike arrays,
 * - linked lists do not require contiguous memory allocation, so random
 * access is slower but insertions/removals are faster.
 * - Types of Linked Lists :
 * Singly Linked List: Each node points to the next node, and the last node
 * points to NULL.
 * Doubly Linked List: Each node contains pointers to both the previous and next
 * nodes.
 * Circular Linked List: The last node points back to the first node, forming a
 * circular structure.
 */

#include <iostream>
using namespace std;

// creating a node
struct Node
{
    int data;   // stores data
    Node *next; // stores pointer to the next node
};

// insert at the beginning
void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Delete at beginning
void deleteAtBeginning(Node *&head)
{
    // check if the list is empty
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    Node *temp = head; // stores current node
    head = head->next; // stores next node in head
    delete temp;       // free memory
}

// display the list
void display(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    int c = 1; // shows which node
    while (temp != NULL)
    {
        cout << "Node " << c << " Data : " << temp->data << "\n";
        temp = temp->next; // move to next node
        c++;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    display(head);

    deleteAtBeginning(head);
    cout << "After deletion : \n";
    display(head);

    return 0;
}