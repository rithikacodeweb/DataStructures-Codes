#include <iostream>
using namespace std;

#define SIZE 10
int arr[SIZE], n = 0;

void insert(int pos, int val) {
    if (n == SIZE) {
        cout << "Array is Full!\n";
        return;
    }
    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    cout << val << " inserted at position " << pos << endl;
}

void remove(int pos) {
    if (n == 0) {
        cout << "Array is Empty!\n";
        return;
    }
    cout << arr[pos] << " removed from position " << pos << endl;
    for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
}

void display() {
    if (n == 0) {
        cout << "Array is Empty!\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    insert(0, 10);
    insert(1, 20);
    insert(2, 30);
    display();
    remove(1);
    display();
    return 0;
}
