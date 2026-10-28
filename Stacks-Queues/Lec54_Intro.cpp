#include<iostream>
using namespace std;

class stack {
public:
    int size;
    int *arr;
    int top;

    // Constructor
    stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push
    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack overflow" << endl;
        }
    }

    // Pop
    void pop() {
        if(top >= 0) {
            top--;
        }
        else {
            cout << "Stack is underflow" << endl;
        }
    }

    // Peek
    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    // Is Empty
    bool isempty() {
        return top == -1;
    }
};

int main() {

    // Creation of stack
    stack s(5);

    s.push(2);
    s.push(4);
    s.push(21);
    s.push(2);
    s.push(4);
    s.push(21);

    // Remove top element
    s.pop();

    cout << "Top index: " << s.top << endl; // return top index from stack

    cout << "Top value: " << s.peek() << endl; // return top value from stack 

    // Checking stack
    if(s.isempty()) {
        cout << "Stack is empty";
    }
    else {
        cout << "Stack is not empty";
    }

    return 0;
}2