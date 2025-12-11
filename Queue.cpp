#include <iostream>
using namespace std;

class Queue {
private:
    static const int maxSize = 10;
    int front;
    int rear;
    int arr[maxSize];

public:
    // Constructor to initialize the queue
    Queue() {
        front = -1;
        rear = -1;
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Method to check if the queue is full
    bool isFull() {
        return (rear == maxSize - 1);
    }

    // Method to add an element at the rear
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        arr[rear] = x;
    }

    // Method to remove an element from the front
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int removed = arr[front];
        front++;
        if (isEmpty()) {
            front = rear = -1;
        }
        return removed;
    }

    // Method to display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    cout << "=====MENU=====" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. "
            ""

    return 0;
}
