/*
Now Implementing stack using linked list :
  Top of stack = head of linked list
  PUSH → insert at beginning
  POP → delete from beginning
  PEEK → read head->data
  isEmpty → head == NULL
*/
#include <iostream>
using namespace std;

// creating a node , each stack element in stored in each node
struct Node
{
    int data;
    Node *next;
};

// stack top pointer
Node *top = NULL;

// check if the stack is empty
bool isEmpty()
{
    return top == NULL;
}

// PUSH - insert at the top of stack
void push(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// POP - remove top element
void pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow";
        return;
    }
    Node *temp = top; // stores top node
    top = top->next;  // stores next node in top
    delete temp;      // free memory
}

// PEEK - read top element
void peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty";
        return;
    }
    cout << "Top Element (peek) : " << top->data << endl;
}

// display the stack elements
void display()
{
    Node *temp = top;
    if (isEmpty())
    {
        cout << "Stack is empty";
        return;
    }
    cout << "Stack elements : \n";
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next; // move to next node
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    cout << "After push operation : \n";
    display();

    peek();

    pop();
    cout << "\nAfter pop operation : \n";
    display();

    return 0;
}