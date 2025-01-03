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

//For sorting link list;
void sort_link_list(Node* head)
{
    for(Node* i=head; i->n_pointer!=NULL; i=i->n_pointer)
    {
        for(Node* j= i->n_pointer; j!=NULL; j= j->n_pointer)
        {
            if(i->val >= j->val)
            {
                swap(i->val, j->val);
            }
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

    sort_link_list(Head);
    print_node(Head);
    
    return 0;
}