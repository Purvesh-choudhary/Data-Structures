// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int x){
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp -> data = x; 
    temp -> next = head;
    head = temp;
}
void Print(){
    struct Node* temp = head;
    printf("List is - ");
    while (temp !=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    head = NULL;
    cout<<"How many no. ? ";
    int n,x;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        Insert(x);
        Print();
    }
    return 0;
}