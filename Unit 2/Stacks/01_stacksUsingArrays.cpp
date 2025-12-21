/*
- A stack is a linear data structure that follows the LIFO
  (Last In, First Out) principle — the last element inserted
  is the first one to be removed.
- Basic Operations
     push(x) → Insert an element x at the top.
     pop() → Remove and return the top element.
     peek() / top() → View the top element without removing it.
     isEmpty() → Check if the stack is empty.
     isFull() → (For array-based stacks) Check if the stack is full.
*/

// Implementation using arrays
#include <iostream>
using namespace std;

#define MAX 5 // maximum stack size

int stack[MAX]; // array to store stack elements
int top = -1;   // index of top element

// add elements to stack - PUSH operation
void push(int value)
{
  // check if stack is full
  if (top == MAX - 1)
  {
    cout << "Stack Overflow";
    return;
  }
  top++;
  stack[top] = value;
}

// remove elements from stack - Pop operation
void pop()
{
  // check if stack is empty
  if (top == -1)
  {
    cout << "Stack Underflow";
    return;
  }
  top--;
}

// view top element - Peek operation
void peek()
{
  if (top == -1)
  {
    cout << "Stack is empty";
    return;
  }
  cout << "\nTop Element (peek) : " << stack[top] << endl;
}

// prints stack elements
void display()
{
  if (top == -1)
  {
    cout << "Stack is empty";
    return;
  }
  cout << "Stack Elements : \n";
  for (int i = top; i >= 0; i--)
  {
    cout << stack[i] << "\n";
  }
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
/*Instead of using if conditions to check stack underflow or
 overflow we can use use
 ```
 bool isEmpty(){
 return top==-1; }
 or
 bool isFull(){
 return top==MAX-1;}
 ```
*/