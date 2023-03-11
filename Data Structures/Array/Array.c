// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

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
    printf("Start - \n");
    Insert(1);
    Insert(3);
    Print();
    return 0;
}