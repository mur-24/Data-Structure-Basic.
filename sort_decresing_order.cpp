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
void user_input(Node* &head, Node* &tail,int val)
{
    Node* last_node=new Node(val);
    if(head==NULL)
    {
        head=last_node;
        tail=last_node;
        return ;
    }

    tail->n_pointer=last_node;
    tail=tail->n_pointer;
}

void sort_decresing(Node* head)
{
    for(Node* i=head; i->n_pointer!=NULL; i = i->n_pointer )
    {
        for(Node* j = i->n_pointer; j != NULL; j= j->n_pointer)
        {
            if(i->val <= j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void output(Node* head)
{
    Node* temp= head;
    while( temp != NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->n_pointer;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }

        user_input(head, tail, val);
    }

    sort_decresing(head);

    output(head);
    return 0;
}