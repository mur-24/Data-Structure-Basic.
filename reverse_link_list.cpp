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

void reverse_link_list(Node* temp)
{
    if(temp==NULL)
    {
        return ;
    }

    reverse_link_list(temp->n_pointer);
    cout<< temp->val<<" ";
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

    reverse_link_list(head);
    
    return 0;
}