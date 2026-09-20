#include <iostream>
using namespace std;

const int SIZE = 5;
int arr[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int x;
    if (rear == SIZE - 1) {
        cout << "Queue is Full!\n";
        return;
    }
    cout << "Enter element to insert: ";
    cin >> x;
    if (front == -1) front = 0;
    rear++;
    arr[rear] = x;
    cout << x << " inserted into queue\n";
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << arr[front] << " deleted from queue\n";
    if (front == rear) front = rear = -1;
    else front++;
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "\n----- QUEUE OPERATIONS -----\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
