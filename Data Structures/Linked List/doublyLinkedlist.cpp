#include<iostream>
using namespace std;
#define max 5

class Node
{
    public :
    int data;
    Node *prev;
    Node *next;
};

void displayForward(Node* Head)
{
    Node *temp = Head;
    cout<<"\n\nForward List - \n";
    while (temp != NULL)
    {
        cout<<temp->data;
        temp= temp->next;
        if(temp != NULL){
            cout<<" <-> ";
        }        
    }
}

void displayBackward(Node* Foot)
{
    Node *temp = Foot;
    cout<<"\n\nBackward List - \n";
    while (temp != NULL)
    {
        cout<<temp->data;
        temp= temp->prev;
        if(temp != NULL){
            cout<<" <-> ";
        }        
    }
}

int main()
{
    Node* l[max]; //create node
    Node* Head,*Foot;

    for(int i=0; i<max; i++){  // alloted memory
        l[i] = new Node(); 
    }
    
    cout<<"\nData -\n";


    for(int i=0; i<max; i++){  // data inserted and displayForward
        l[i]->data = i+10;
        cout<<l[i]->data;
        if(i!= 4)
        cout<<" <-> ";
    }

    for(int i=0; i<max; i++){  // Linking Nodess
        if(i==0){
            l[i]->prev = NULL;
            l[i]->next = l[i+1];
        }
        else if(i==4){
            l[i]->next = NULL;
            l[i]->prev = l[i-1];
        }
        else{
            l[i]->next = l[i+1];
            l[i]->prev = l[i-1];
        }
    }

    Head = l[0];
    Foot = l[4];

    displayForward(Head);
    displayBackward(Foot);


    cout<<"\n\nProgram Ended !"<<endl;

    return 0;
}