#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *head;
Node *l1 = NULL;
Node *l2 = NULL;

void Insert(int Data)
{
    Node *temp = new Node();
    temp->data = Data;
    temp->next = head;
    head = temp;
}
void Print()
{
    Node *temp = head;
    cout<<"LL Value - ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
void PrintAdd()
{
    Node *temp = head;
    cout<<"\nLL ADDRESS - ";
    while (temp != NULL)
    {
        cout<<temp<<" ";
        temp= temp->next;
    }
}

int main()
{
    int no,x;

    l1 = new Node();
    l2 = new Node();

    l1->data = 5;
    l2->data = 10;
    l1->next = l2;
    l2->next = NULL;

    head = l1;
    
    // TO print address of Nodes
    cout<<"Head = "<<head<<endl;
    cout<<"l1 = "<<l1<<endl;
    cout<<"l2 = "<<l2<<endl;


    cout<<"Linked List is - "<<l1->data<<" "<<l2->data<<endl;
    
    again:
    cout<<"\nEnter no. - ";
    cin>>no;
    Insert(no);
    Print();
    PrintAdd();

    goto again;
    cout<<"END OF THE PROGRAM";
    return 0;
}