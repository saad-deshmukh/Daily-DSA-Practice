#include <iostream>
using namespace std;

class StackUsingArray {
private:
    int top;
    int st[10];

public:
    StackUsingArray() {
        top = -1;
    }

    void push(int x) {
        if (top >= 9) {
            cout << "Stack overflow: exceeding size\n";
            return;
        }
        top++;
        st[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow: nothing to pop\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return st[top];
    }

    int size() {
        return top + 1;
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    StackUsingArray s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top after pop: " << s.peek() << endl;
    cout << "Size: " << s.size() << endl;
    return 0;
}
