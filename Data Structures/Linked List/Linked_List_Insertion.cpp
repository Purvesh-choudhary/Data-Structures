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

void InsertAtBegin(int Data)
{
    Node *temp = new Node();
    temp->data = Data;
    temp->next = head;
    head = temp;
}
void InsertAtEnd(int Data)
{
    Node *temp = new Node();
    Node *ptr = head;
    temp->data = Data;
    temp->next = NULL;

    while (ptr->next != NULL)
    {   
        ptr = ptr->next;
    } 
    ptr->next = temp;
}

void InsertAtMid(int Data, int add)
{
    Node *temp = new Node();
    Node *ptr = head;
    temp->data = Data;

    for (int i = 2; i < add; i++)
    {  
        if(ptr->next != NULL){
            ptr = ptr->next;
        }
    } 
    temp->next = ptr->next;
    ptr->next = temp;
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
    int no,x,add;

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

    cout<<"Linked List is - "<<l1->data<<" -> "<<l2->data<<" -> "<<l3->data<<endl;
    
    do
    {
        cout<<"\nInsert at 1.Begin   2.Mid   3.End   4.Quit  |  Choice - ";
        cin>>x;

        switch (x)
        {
        case 1 :    cout<<"Enter no. - ";
                    cin>>no;
                    InsertAtBegin(no);
                    Print();
                    PrintAdd();
                    break;
        case 2 :    cout<<"Enter no. - ";
                    cin>>no;
                    cout<<"Enter add - ";
                    cin>>add;
                    InsertAtMid(no,add);
                    Print();
                    PrintAdd();
                    break;            
        case 3 :    cout<<"Enter no. - ";
                    cin>>no;
                    InsertAtEnd(no);
                    Print();
                    PrintAdd();
                    break;
        case 4 :    break;    
        
        default:    cout<<"Wrong Choise - Try Again";                  
                    break;
        } 
    }while(x!=4);

    cout<<"END OF THE PROGRAM";
    return 0;
}