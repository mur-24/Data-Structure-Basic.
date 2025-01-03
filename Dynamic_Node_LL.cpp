#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->next=NULL;
        this->val=val;
    }

};

int main()
{
    Node *head=new Node(50);
    Node *n1=new Node(20);
    Node *n2=new Node(55);
    Node *n3=new Node(11);

    head->next=n3;
    n3->next=n2;
    n2->next=n1;

    //Manually Print;
    cout<<"Manually Print \n";
    cout<<head->val<<endl; // Head value 50 
    cout<<head->next->val<<endl; //Node n3 value 11
    cout<<head->next->next->val<<endl; //Node n2 value; 55
    cout<<head->next->next->next->val<<endl; // Node n1 value; 20

    //Efficient way;
    cout<<"Print Using Loop \n";
    while(head != NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
        
    }

    /*
        There is a big problem, When we change Head note.
        Link List are not found because last Head node is NULL. This 
        problem is solved by a taking a Temp node.
    */
    
    return 0;
}