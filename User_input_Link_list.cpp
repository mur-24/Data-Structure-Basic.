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
void in_tail_optimize(Node* &head, Node* &tail,int val)
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

        in_tail_optimize(head, tail, val);
    }

    print(head);
    
    return 0;
}