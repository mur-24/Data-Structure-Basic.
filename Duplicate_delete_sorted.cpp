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

// Sorted list duplicate element delete
void duplicate_element_delete(Node* &head)
{
    if(head == NULL)
    {
        return;
    }

    Node* curr = head;
    while(curr != NULL && curr->n_pointer != NULL)
    {
        if(curr->val == curr->n_pointer->val)
        {
            Node* dlt_node = curr->n_pointer;
            curr->n_pointer= curr->n_pointer->n_pointer;
            delete dlt_node;
            
        }
        else
        {
            curr = curr->n_pointer;
        }
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

    duplicate_element_delete(Head);

    print_node(Head);
    
    return 0;
}