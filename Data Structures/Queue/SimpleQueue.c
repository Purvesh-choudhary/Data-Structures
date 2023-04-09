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

    viewqueue();

    printf("\nFront : %d",getFront());
    printf("\nRear  : %d",getRear());

    return 0;
}

void enqueue(int element){
    if(isFull()){
        printf("The queue is full\n");
    }else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=element;
        printf("Enqueued : %d\n",queue[rear]);
    }
}
void dequeue(){
    if(isEmpty()){
        printf("The queue is Empty\n");
    }else{
        printf("Dequeued : %d\n",queue[front]);
        queue[front]=0;
        front++;
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
    for(i=front; i<=rear; i++){
        printf("%d ",queue[i]);
    }
}