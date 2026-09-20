#include <iostream>
using namespace std;

#define SIZE 5
int arr[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int x;
    if ((rear + 1) % SIZE == front) {
        cout << "Queue is Full!\n";
        return;
    }
    cout << "Enter element to insert: ";
    cin >> x;
    if (front == -1) front = 0; // first element
    rear = (rear + 1) % SIZE;
    arr[rear] = x;
    cout << x << " inserted into queue\n";
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << arr[front] << " deleted from queue\n";
    if (front == rear) {
        front = rear = -1; // queue becomes empty
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty!\n";
