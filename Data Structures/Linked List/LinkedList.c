#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createLinkedList(); 
void insertAtBegin();
void insertAtMid();
void insertAtEnd();
void deleteAtBegin();
void deleteAtMid();
void deleteAtEnd();
void Display();
void len();

int main(){
    
    int choice;
    do
    {
        printf("\nselect any operation - \n");
        printf("1. create Linked List\n");
        printf("2. insert At Begin\n");
        printf("3. insert At Mid\n");
        printf("4. insert At End\n");
        printf("5. delete At Begin\n");
        printf("6. delete At Mid\n");
        printf("7. delete At End\n");
        printf("8. Display Linked List\n");
        printf("9. Linked List Length\n");
        printf("10. Exit\n");

        printf("Your Choice - ");
        scanf("%d",&choice);
        
        switch (choice)
        {
        case 1:
            if(head == NULL){
                createLinkedList();
            }else{
                printf("Linked List Is Already Created !\n");
            }
            Display();
            break;
        case 2:
            insertAtBegin();
            Display();
            break;    
        case 3:
            insertAtMid();
            Display();
            break;
        case 4:
            insertAtEnd();
            Display();
            break;
        case 5:
            deleteAtBegin();
            Display();
            break;
        case 6:
            deleteAtMid();
            Display();
            break;        
        case 7:
            deleteAtEnd();
            Display();
            break;
        case 8:
            Display();
            break;
        case 9:
            len();
            break;
        default:
            printf("Select Proper Operation!\n");
            break;
        }

    }while(choice!=10);

    return 0;    
}

void createLinkedList(){
    int data,n;
    struct node *temp, *newnode;
    
    printf("Enter how many Elements You want to add in Linked List - ");
    scanf("%d",&n);

    head = (struct node*)malloc(sizeof(struct node));

    printf("Enter the Element at node 1 : ");
    scanf("%d",&data);
    head->data = data;
    head->next = NULL;
    temp = head;
    printf("Node 1 Inserted!\n");

    for (int i = 2; i <= n ; i++)
    {
        printf("Enter the Element at node %d : ",i);
        scanf("%d",&data);
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
        printf("Node %d Inserted!\n",i);
    }  
}
void insertAtBegin(){

    struct node *newnode;
    int data;

    printf("Enter Your New Data - ");
    scanf("%d",&data);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;

    printf("\nNode Inserted At Begin !\n");
}
void insertAtMid(){

    struct node *temp, *newnode;
    temp = head;
    int data,loc;

    printf("Enter Loction where you want to enter Data - ");
    scanf("%d",&loc);
    printf("Enter Your New Data - ");
    scanf("%d",&data);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;

    for(int i = 1; i<loc-1; i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    
    printf("\nNode Inserted At Mid !\n");
}
void insertAtEnd(){

    struct node *temp, *newnode;
    temp = head;
    int data;

    printf("Enter Your New Data - ");
    scanf("%d",&data);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    
    printf("\nNode Inserted At End !\n");
}
void deleteAtBegin(){

    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
    printf("\nNode Deleted At Begin !\n");
}
void deleteAtMid(){
    int loc;
    struct node *temp , *del;
    printf("Enter Loction where you want to Deelet Data - ");
    scanf("%d",&loc);
    temp = head;
    for(int i = 1; i<loc; i++){
        del = temp;
        temp = temp->next;
    }
    del->next = temp->next;
    free(temp);
    printf("\nNode Deleted At Mid !\n");
}
void deleteAtEnd(){

    struct node *temp , *last;
    temp = head;
    while (temp->next!=NULL)
    {   
        last = temp;
        temp = temp->next;
    }
    last->next = NULL;
    free(temp);
    printf("\nNode Deleted At End !\n");
}
void len(){
    int count;
    struct node *temp;
    temp = head;
    for(count = 1; temp->next != NULL; count ++){
        temp = temp->next;
    }
    printf("Total Elements In Linked List is %d\n",count);
}

void Display(){

    struct node *temp;
    temp = head;

    printf("\nLinked List - ");
    
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("X ");
}
