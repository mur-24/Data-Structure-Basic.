#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

};

int main()
{
    Node ob1,ob2,ob3;
    ob1.val=20;     //value of node
    ob1.next=&ob2;  //Next Node address

    ob2.val=30;     //Value of Node;
    ob2.next=&ob3;  //Next Node Address;

    ob3.val=80;
    ob3.next=NULL;

    cout<<ob1.val<<" "<<(*ob1.next).val<<" "<<(*(*ob1.next).next).val;
    
    return 0;
}