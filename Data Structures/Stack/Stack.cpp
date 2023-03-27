#include <iostream>
using namespace std;

int stack[5];
int *top;

void push(int data)
{
    if(*top == 5)
    {
        cout<<"Stack Overflow !"; 
        return;
    }
    *top++;
    stack[*top] = data;
}
void display()
{
    for(int i =4; i>=0; i++)
        cout<<i<<"="<<stack[i]<<endl;
}

int main()
{
    *top = -1;
    push(12);
    display();
    return 0;
}