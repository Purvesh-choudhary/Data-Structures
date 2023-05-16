#include<iostream>
using namespace std;
#define max 5

struct stack{
    int data[5];
    int top;
};

void push(stack *p, int item){
    if(p->top>=max){
        cout<<"Overflow!\n";
        return;
    }
    p->top++;
    p->data[p->top]=item;
    cout<<"pushed - "<<p->data[p->top]<<endl;
}

int pop(stack *p){
    int item;
    if(p->top<0){
        cout<<"Underflow! ";
        return 0;
    }
    item = p->data[p->top];
    p->top--;
    return item;
}

void peek(stack *p){
    cout<<"Top - "<<p->data[p->top]<<endl;
}

void peep(stack p){
    int i;
    if (p.top == -1)
    {
        cout<<"stack is empty!";
    }
    else{
        cout<<"\nDisplaying Stack-\n";
        for(i=p.top ; i>=0; i--){
            cout<<p.data[i]<<endl;
        }
    }
        
}

int main()
{
    struct stack st;
    st.top=-1;

    for(int i=1; i<=5; i++){
        push(&st,i*2);
        peek(&st);
    }
    peep(st);

    cout<<"POPED - "<<pop(&st)<<endl;
    peek(&st);
    cout<<"POPED - "<<pop(&st)<<endl;
    peek(&st);
    cout<<"POPED - "<<pop(&st)<<endl;
    peek(&st);

    peep(st);
    
    return 0;
}