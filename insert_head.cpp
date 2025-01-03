#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* n_pointer;

    Node(int val)
    {
        this->n_pointer=NULL;
        this->val=val;
    }

};


// For new Head insertion
void insert_node(Node * &head)
{
    Node *New_head=new Node(100);
    New_head->n_pointer=head;

    head=New_head;

}

// For Output;

void print_node(Node * head)
{
    Node *temp= head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->n_pointer;
    }
}

int main()
{
    Node * head=new Node(10);
    Node * n1=new Node(5);
    Node * n2=new Node(20);

    head->n_pointer=n2;
    n2->n_pointer=n1;

    insert_node(head);
    print_node(head);

    
    return 0;
}