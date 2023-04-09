#include<stdio.h>
#include<stdbool.h>

int queue[10];
int max_size=10;
int front;
int rear;

void enqueue(int element);
void dequeue();
void viewqueue();
int getFront();
int getRear();
bool isFull();
bool isEmpty();

int main()
{
    front = -1;
    rear = -1;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    enqueue(11);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    viewqueue();
    
    enqueue(3);
    viewqueue();
    enqueue(4);
    enqueue(5);
    
    viewqueue();
    
    printf("\nFront : %d",getFront());
    printf("\nRear  : %d",getRear());

    return 0;
}

void enqueue(int element){
    if(isEmpty()){
        front=0;
        rear=0;
        queue[rear]=element;
        printf("Enqueued : %d\n",queue[rear]);
    }else if(rear==max_size-1 && front ==0){
        printf("The queue is full\n");
    }else if(rear==max_size-1 && front !=0){
        rear=0;
        queue[rear]=element;
        printf("Enqueued : %d\n",queue[rear]);
    }else{
        rear++;
        queue[rear]=element;
        printf("Enqueued : %d\n",queue[rear]);
    }
}
void dequeue(){

    if(front==-1){
        printf("The queue is Empty \n");
    }else{
        printf("Dequeued : %d\n",queue[front]);
        queue[front]=0;
        if(front==rear){
            front=-1;
            rear=-1;
        }else if(front==max_size-1){
            front=0;
        }else{
            front++;
        }
    }
}

bool isFull()
{
    if(rear==max_size-1)   
        return true;
    else
        return false;
}
bool isEmpty(){
    if(rear==-1 && front ==-1)       
        return true;  
    else 
        return 0;
}

int getFront(){
    return queue[front];
}
int getRear(){ 
    return queue[rear];
}

void viewqueue(){
    int i;
    printf("queue : ");
    if(rear>=front){ 
        for(i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }else{
        for(i=front; i<=max_size-1; i++){
            printf("%d ",queue[i]);
        }
        for(i=0; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }
    printf("\n");
}