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
    int key,j,temp;
    int n = 10;

    ////////////////////////////////////
    cout<<"Before Sorting = ";
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<" ";
    }

    ////////////////////////////////////
    //// INSERTION SORT

    // procedure insertionSort(arr):
    // for i = 1 to n-1
    //     key = arr[i]
    //     j = i-1
    //     while j >= 0 and arr[j] > key
    //         swap arr[j+1] with arr[j]
    //         j = j - 1
    //     end while
    // end for
    // end function

    for (int i = 1; i < n; i++)
    {
        key = x[i];
        j= i-1;
        while (j>=0 && x[j]>key)
        {   
                temp=x[j+1];
                x[j+1]=x[j];
                x[j]=temp;
            j--;
        }
        cout<<"pass "<<i<<" = "<<x[i]<<endl;
    }
    



    ////////////////////////////////////
    cout<<"\nAfter Sorting = ";
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<" ";
    }

    return 0;
}