#include<iostream>
using namespace std;

// void swap(int *x,int*y){
//     int temp;
//     temp = *x;
//     *x=*y;
//     *y=temp;
// }

int main(){
    int x[]={52,44,46,88,96,32,12,21,36,59};
    int temp;
    cout<<"Before Sorting = ";
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<" ";
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"\nPass "<<i+1<<" = ";
        for (int j = 0; j < 10-i-1; j++)
        {cout<<x[j]<<" ";
            
            if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
            
        }
    }
    cout<<"\nAfter Sorting = ";
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<" ";
    }

    return 0;
}