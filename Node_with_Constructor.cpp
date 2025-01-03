#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next_addre;

    Node(int val)
    {
        this->val=val;
        this->next_addre=NULL;
    }
};

int main()
{
    Node ob1(10),ob2(20),ob3(55),ob4(66),ob5(99);

    //For Link to list;

    ob1.next_addre=&ob5;
    ob5.next_addre=&ob3;
    ob3.next_addre=&ob2;
    ob2.next_addre=&ob4;

    //For Output

    cout<<ob1.val<<endl;
    cout<<(ob1.next_addre)->val<<endl;
    cout<<((ob1.next_addre)->next_addre)->val<<endl;
    cout<<((ob1.next_addre)->next_addre->next_addre)->val<<endl;
    cout<<(ob1.next_addre)->next_addre->next_addre->next_addre->val<<endl;
    

    return 0;
}