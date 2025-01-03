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
void in_tail_optimize(Node* &head, Node* &tail)
{
    Node* last_node=new Node(40);
    if(head==NULL)
    {
        head=last_node;
        tail=last_node;
        return ;
    }

    tail->n_pointer=last_node;
    tail=tail->n_pointer;
}

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->n_pointer;
        
    }
}

int main()
{
    Node* head=new Node(10);
    Node* n1=new Node(20);
    Node* tail=new Node(30);

    head->n_pointer=n1;
    n1->n_pointer=tail;

    in_tail_optimize(head, tail);
    print(head);
    
    return 0;
}