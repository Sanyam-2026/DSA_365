#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

Node *checkLoop(Node *&head) {
  if (head == NULL) {
    cout << "LL is empty " << endl;
    return NULL;
  }
  if (head->next == NULL) {
    cout << "LL is has only 1 Node so No Loop Present " << endl;
    return NULL;
  }
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL) {
    fast = fast->next;
    if (fast != NULL) {
      fast = fast->next;
      slow = slow->next;
    }
    if (slow == fast) {

      break;
    }
  }
  if (slow != fast) {
    return NULL;
  }
  slow = head;
  Node* prev = fast;
  while (slow != fast) {
    prev= fast;
    slow = slow->next;
    fast = fast->next;
  }
  return slow;
}
void removeLoop(Node* &head){
    if(head == NULL){
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        // loop is present
        if(slow == fast){
            // Move slow to head
            slow = head;
            break;
        }
    }
    Node *prev = fast;
    while(slow!=fast){
        // Move both by 1 step
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    // Removal step
    prev->next = NULL;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
int main() {
  Node *head = new Node(10);
  Node *first = new Node(20);
  Node *second = new Node(30);
  Node *third = new Node(40);
  Node *fourth = new Node(50);
  Node *fifth = new Node(60);
  Node *sixth = new Node(70);
  Node *seventh = new Node(80);
  Node *eigth = new Node(90);
  head->next = first;
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  sixth->next = seventh;
  seventh->next = eigth;
  eigth->next = second;
  Node *startingPoint = checkLoop(head);

  if (startingPoint == NULL) {
    cout << "Loop is not present" << endl;
  } else {
    cout << "Loop is Present at " << startingPoint->data<<endl;
    cout<<"Linked List after Removel of Loop will be"<<endl;
    removeLoop(head);
    print(head);
  }
  return 0;
}
