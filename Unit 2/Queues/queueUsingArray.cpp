/*
 * - A Queue is a linear data structure that follows the FIFO (First In First
 * Out)
 * principle — the first element inserted is the first to be removed. It is
 * widely used in scenarios like CPU scheduling, I/O buffering, Breadth-First
 * Search (BFS), and order processing systems.
 * - A queue has two ends:
 * Front: where elements are removed (dequeue).
 * Rear: where elements are added (enqueue).
 * - Core Operations:
 * enqueue(element) → Add an element to the rear. rear changes when you enqueue
 * dequeue() → Remove and return the front element. front changes when you dequeue
 * peek() → View the front element without removing it.
 * isEmpty() → Check if the queue has no elements.
 * size() → Get the number of elements.
 * - Types include simple, circular , priority, double ended queue(deque).
 */

// Implementation of queue using arrays

#include <iostream>
using namespace std;

#define SIZE 5 // maximum queue size

int queue[SIZE]; // array to store queue elements
int front = -1;  // index of front element
int rear = -1;   // index of rear element

// check if queue is empty
bool isEmpty()
{
    return front == -1 || front > rear;
}

// check if queue is full
bool isFull()
{

    return rear == SIZE - 1;
}

// Enqueue - add elements to the queue from rear
void enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue Overflow";
        return;
    }
    // check if first insertion
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
}

// Dequeue - remove elements from the queue from front
void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow";
        return;
    }
    cout << "\nRemoved : " << queue[front] << endl;
    front++;

    // reset when queue becomes empty, prevents false
    // overflow  , queue becomes reusable
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

// peek or front - shows first element
void peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }
    cout << "First Element (front) : " << queue[front] << endl;
}

// displaying the queue elements
void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }
    cout << "Queue elements are : \n";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << "\n";
    }
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << "After enqueue operation : \n";
    display();

    peek();

    dequeue();
    cout << "After dequeue operation : \n";
    display();
}