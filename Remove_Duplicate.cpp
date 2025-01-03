#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* n_pointer;

    Node(int val)
    {
        this->val=val;
        this->n_pointer=NULL;
    }

};

// For user input
void user_input(Node* &head, Node* &tail, int val)
{
    Node* insert_value= new Node(val);
    if(head==NULL)
    {
        head = insert_value;
        tail = insert_value;
        return;
    }
    tail->n_pointer = insert_value;
    tail = tail->n_pointer;
}

void duplicate_delete_unsorted(Node* &head)
{
    if (head == NULL)
        return;

    Node* curr = head;
    while (curr != NULL && curr->n_pointer != NULL)
    {
        Node* prev = curr;
        Node* temp = curr->n_pointer;

        while (temp != NULL)
        {
            if (curr->val == temp->val)
            {
                prev->n_pointer = temp->n_pointer;
                delete temp;
                temp = prev->n_pointer; 
            }
            else
            {
                prev = temp;
                temp = temp->n_pointer;
            }
        }

        curr = curr->n_pointer; 
    }
}


// For Output
void print_node(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->n_pointer;
    }
}

int main()
{
    Node* Head=NULL;
    Node* Tail=NULL;
    while(true)
    {
        int value;
        cin>>value;
        if(value==-1)
        {
            break;
        }

        user_input(Head, Tail, value);
    }

    duplicate_delete_unsorted(Head);
    print_node(Head);
    
    return 0;
}