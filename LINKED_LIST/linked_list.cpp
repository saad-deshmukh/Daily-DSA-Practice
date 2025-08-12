#include <bits/stdc++.h>
using namespace std;
// Creating the linked list

// 4 MAIN FUNCTIONS OF LINKED LIST
// 1] PUSH_FRONT()
// 2] PUSH_BACK()
// 3] POP_FRONT()
// 4] POP_BACK()

class Node
{
public:
  int data;
  Node *next;
  Node(int value) // initializing the constructor
  {
    data = value;
    next = NULL;
  }
};

class List
{
  Node *head; // private members
  Node *tail;

public:
  List()
  {
    head = tail = NULL;
  }

  void push_front(int val)
  {
    Node *newNode = new Node(val); // dynamic object

    if (head == NULL)
    {
      head = tail = newNode;
      return;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }

  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void pop_front()
  {
    Node *temp = head;
    if (head == NULL)
    {
      cout << "Nothing to delete\n";
      return;
    }
    else
    {
      head = head->next;
      temp->next = NULL;
      delete temp;
    }
  }

  void printList()
  {

    if (head == NULL)
    {
      cout << "no list is present\n";
    }
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "-> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  void pop_back()
  {
    if (head == NULL)
    {
      cout << "nothing to delete in the linked list \n";
      return;
    }
    else
    {
      Node *temp = head;
      while (temp->next != tail)
      {
        temp = temp->next;
      }
      temp->next = NULL;
      delete tail;
      tail = temp;
    }
  }

  void insert(int val, int pos)
  { // assume the position as array index

    if (pos < 0)
    {
      cout << "invalid position";
      return;
    }
    if (pos == 0)
    {
      push_front(val);
      return;
    }

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
  }

  int search(int key)
  {

    Node *temp = head;
    int index = 0;

    while (temp != NULL)
    {
      if (temp->data == key)
      {
        return index;
      }
      temp = temp->next;
      index++;
    }
    return -1;
  }
};

int main()
{
  List ll;
  ll.push_front(5);
  ll.push_front(6);
  ll.push_front(7);
  ll.push_back(10);
  ll.insert(7, 3);
  ll.push_back(8);
  ll.push_back(6);
  ll.printList();
  cout << ll.search(10);
}