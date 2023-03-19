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
Node *l3 = NULL;

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

void Delete(int loc)
{
    Node* temp = head;
    if(loc == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for(int i=2; i<loc; i++)
    {
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}

int main()
{
    int no,x,add,d_no;;

    l1 = new Node();
    l2 = new Node();
    l3 = new Node();
    
    l1->data = 5;
    l2->data = 10;
    l3->data = 15;
    l1->next = l2;
    l2->next = l3;
    l3->next = NULL;

    head = l1;
    
    // TO print address of Nodes
    cout<<"Head = "<<head<<endl;
    cout<<"l1 = "<<l1<<endl;
    cout<<"l2 = "<<l2<<endl;
    cout<<"l3 = "<<l3<<endl;
    //Print liked List
    cout<<"Linked List is - "<<l1->data<<" -> "<<l2->data<<" -> "<<l3->data<<endl;

    
    cout<<"Enter element you want to Delete - ";
    cin>>d_no;

    Delete(d_no);
    cout<<"Item Deleted";
    Print();

    cout<<"END OF THE PROGRAM";
    return 0;
}