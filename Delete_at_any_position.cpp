#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* n_pointer;

    Node(int val)
    {
        this-> n_pointer=NULL;
        this-> val=val;

    }

};


//For user input;
void user_input(Node* &head, Node* &tail, int val)
{
    Node* insert_value= new Node(val);
    if(head==NULL)
    {
        head= insert_value;
        tail= insert_value;
        return ;
    }

    tail->n_pointer= insert_value;
    tail= tail->n_pointer;
}

// For Delete head Node;
void delete_at_any_position(Node* &head, int index)
{
    Node* tmp=head;
    for(int i=1; i<index; i++)
    {
        tmp= tmp->n_pointer;
    }
    Node* Delete_node= tmp->n_pointer; //Temporary Store index+1 Node;
    tmp->n_pointer=tmp->n_pointer->n_pointer; // Connection from previous node to next Position;
    delete Delete_node; // Delete index+1 Node;
}

void print_node(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<< temp->val<<" ";
        temp= temp->n_pointer;
    }
}

int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;

    while(true)
    {
        int value;
        cin>>value;
        if(value== -1)
        {
            break;
        }

        user_input(Head, Tail, value);
    }

    // Call delete function 
    delete_at_any_position(Head,2);

    //For output
    print_node(Head);
    
    return 0;
}