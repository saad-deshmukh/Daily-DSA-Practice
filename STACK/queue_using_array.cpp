#include <iostream>
using namespace std;

class Q_using_array {
private:
    int start = -1;
    int end = -1;
    int size = 10;
    int q[10];
    int currsize = 0;

public:
    void push(int x) {
        if (currsize == size) {
            cout << "No place is left to push data" << endl;
            return;
        }
        if (currsize == 0) {
            start = end = 0;
        } else {
            end = (end + 1) % size;
        }
        q[end] = x;
        currsize++;
    }

    int pop() {
        if (currsize == 0) {
            cout << "Nothing to delete" << endl;
            return -1;
        }

        int ele = q[start];
        if (currsize == 1) {
            start = end = -1;
        } else {
            start = (start + 1) % size;
        }
        currsize--;
        return ele;
    }

    int top() {
        if (currsize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return q[start];
    }

    bool isEmpty() {
        return currsize == 0;
    }

    int getSize() {
        return currsize;
    }
};
int main() {
    Q_using_array q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.top() << endl;  // Should print 10

    cout << "Popped: " << q.pop() << endl; // Should print 10
    cout << "Front: " << q.top() << endl;  // Should print 20

    return 0;
}
