#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE], top = -1;

void push(int x) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow!\n";
        return;
    }
    stack[++top] = x;
    cout << x << " pushed into stack\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return;
    }
    cout << stack[top--] << " popped from stack\n";
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty!\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    cout << endl;
}

int main() {
    int choice, val;
    do {
