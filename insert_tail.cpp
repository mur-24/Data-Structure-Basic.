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

void insert_last_node(Node *head)
{
    Node *new_node= new Node(100);
    if(head==NULL)
    {
        head=new_node;
        return ;
    }

    Node *temp=head;
    while(temp->n_pointer!=NULL)
    {
        temp=temp->n_pointer;

    }

    //Insert new node in the last node;
    temp->n_pointer=new_node;
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
    Node *head= new Node(10);
    Node *n2= new Node(20);
    Node *n3= new Node(5);
    Node *n4= new Node(16);
    
    head->n_pointer=n4;
    n4->n_pointer=n2;
    n2->n_pointer=n3;

    insert_last_node(head);
    print_list(head);

    return 0;
}