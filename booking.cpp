#include <iostream>
using namespace std;

class Queue {
private:
    int data[5];
    int front, rear, size;

public:
    Queue() {
        size = 5;
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == size -1) {
            cout << "Queue overflow! Queue is full.\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        data[rear] = value;
        cout << "Element inserted successfully.\n";
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue underflow.\n";
            front = rear = -1;
            return;
        }

        cout << "Deleted element: " << data[front] << '\n';
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << data[i] << ' ';
        }
        cout << '\n';
    }
};

int main() {
    Queue q;

    q.enqueue(100);
    q.enqueue(50);
    q.enqueue(60);

    q.display();
    q.dequeue();
    q.display();

    return 0;
}