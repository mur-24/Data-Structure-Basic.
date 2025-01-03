#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* n_pointer;

    Node (int val)
    {
        this->val = val; 
        this->n_pointer = NULL; 
    }
};

// Insert a new node at the tail
void insert_tail(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->n_pointer != NULL) {
        temp = temp->n_pointer;
    }
    temp->n_pointer = newNode;
}

// Remove duplicate elements
void removeDuplicates(Node* head) {
    if (head == NULL) return;

    Node* current = head;
    while (current != NULL && current->n_pointer != NULL) {
        if (current->val == current->n_pointer->val) {
            Node* duplicate = current->n_pointer;
            current->n_pointer = current->n_pointer->n_pointer;
            delete duplicate;
        } else {
            current = current->n_pointer;
        }
    }
}

void printList(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->n_pointer;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int value;
        cin >> value;
        if(value== -1)
        {
            break;
        }
        insert_tail(head, value);
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}
