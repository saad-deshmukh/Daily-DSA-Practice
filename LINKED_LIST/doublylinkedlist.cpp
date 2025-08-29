#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class doublyList
{
    Node *head;
    Node *tail;

public:
    doublyList()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            head->prev = newnode;
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {

            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front()
    {

        if (head == NULL)
        {
            cout << "Nothing to pop !! " << endl;
            return;
        }

        if (head == tail)
        {
            delete head; // free memory
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            head->prev = NULL;
            delete temp;
        }
    }

    void pop_back()
    {
        Node *temp = tail;
        if (tail == NULL)
        {
            cout << "nothing to pop linked list is empty";
            return;
        }

        if (tail == head)
        {
            delete tail;        // free memory
            head = tail = NULL; // only one node or element is present
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
    }
   
    void prinlist()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void printreverse()
    {

        Node *temp = tail;

        while (temp != NULL)
        {
            cout << temp->data << "<=>";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main()
{

    doublyList dll;
    dll.push_front(10);
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.pop_front();
    dll.pop_back();
    dll.prinlist();
    dll.printreverse();
}
