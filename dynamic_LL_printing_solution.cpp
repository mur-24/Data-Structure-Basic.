#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *n_pointer;
    Node(int val)
    {
        this->n_pointer=NULL;
        this->val=val;
    }

};

int main()
{

    Node *head=new Node(10);
    Node *nt1=new Node(20);
    Node *nt2=new Node(88);
    Node *nt3=new Node(77);

    head->n_pointer=nt3;
    nt3->n_pointer=nt1;
    nt1->n_pointer=nt2;
    
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->n_pointer;
    }
    
    return 0;
}