#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node() {
    this->data = 0;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() {
    int val = this->data;
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "Node with value " << this->data << " deleted . ";
  }
};
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int getLength(Node *&head) {
  int length = 0;
  Node *temp = head;
  while (temp != NULL) {
    temp = temp->next;
    length++;
  }
  return length;
}

void insertAtHead(Node *&head, Node *&tail, int data) {
  //  if list is empty
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = tail = newNode;
  } else {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
  }
}

void insertAtTail(Node *&head, Node *&tail, int data) {
  //  if list is empty
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = tail = newNode;
  } else {
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
  }
}

void insertAtPos(Node *&head, Node *&tail, int data, int pos) {
  //  if list is empty
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = tail = newNode;
    return;
  }
  if (pos == 0) {
    insertAtHead(head, tail, data);
    return;
  }
  int length = getLength(head);
  if (pos >= length) {
    insertAtTail(head, tail, data);
    return;
  }
  Node *prev = head;
  int st = 1;
  while (st < pos) {
    prev = prev->next;
    st++;
  }
  Node *cur = prev->next;
  Node *newNode = new Node(data);
  newNode->next = cur;
  prev->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int pos) {
  // If LL is empty
  if (head == NULL) {
    cout << " LL is empty can not delete";
    return;
  }
  int len = getLength(head);
  if (pos < 1 or pos > len) {
    cout << "Out of Bound Position ";
    return;
  }

  if (pos == 1) {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  }
  if (pos == len) {
    int count = 1;
    Node *prev = head;
    while (count < pos - 1) {
      prev = prev->next;
      count++;
    }
    prev->next = NULL;
    Node *temp = tail;

    tail = prev;
    delete temp;
    return;
  }
  int count = 1;
  Node *prev = head;
  while (count < pos - 1) {
    prev = prev->next;
    count++;
  }
  Node *cur = prev->next;

  prev->next = cur->next;
  cur->next = NULL;
  delete cur;
}
int main() {

  Node *head = new Node(10);
  Node *tail = head;
  insertAtTail(head, tail, 20);
  insertAtTail(head, tail, 30);
  insertAtTail(head, tail, 40);
  insertAtTail(head, tail, 50);
  print(head);
  cout << endl;
  deleteNode(head, tail, 6);
  cout << endl;
  print(head);

  return 0;
}
