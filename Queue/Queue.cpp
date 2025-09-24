#include <iostream>
using namespace std;
// implementation of Queue using fixed size array
class Queue {
private:
    int arr[100];   // fixed-size array for queue
    int front, rear, size;

public:
    Queue() {
        front = -1;
        rear = -1;
        size = 100;  // max size of the array 
    }

    // Insert element at the back of the queue
    void enqueue(int x) {
        if (rear == size - 1) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0; // first insertion
        arr[++rear] = x;
        cout << x << " inserted into queue" << endl;
    }

    // Remove element from front
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << arr[front] << " removed from queue" << endl;
        front++;
    }

    // Get front element
    int getFront() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front after dequeue: " << q.getFront() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();  // trying dequeue on empty queue

    return 0;
}
