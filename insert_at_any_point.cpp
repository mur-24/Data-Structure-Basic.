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

void insert_at_any_point(Node *head,int i)
{
    Node *new_node=new Node(155);
    Node *t=head;
    for(int j=1; j<i; j++)
    {
        
        // cout<<(*t).val<<endl; // Firtst Node value
        t=t->n_pointer;
    }
    // cout<<t->n_pointer->val<<endl; // Last Node value

    // New Node link to Index+1 Node
    new_node->n_pointer=t->n_pointer;

    // Index-1 Node link to New Node;
    t->n_pointer=new_node;
}

void print_list(Node * head)
{
    Node *tt=head;
    while(tt!=NULL)
    {
        cout<<tt->val<<endl;
        tt=tt->n_pointer;
    }
}

int main()
{
    Node *head=new Node(100);
    Node *n1=new Node(55);
    Node *n2=new Node(2);

    head->n_pointer=n2;
    n2->n_pointer=n1;

    insert_at_any_point(head,2);
    print_list(head);
    
    return 0;
}