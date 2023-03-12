#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter 5 no. - \n";
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"no. "<<i+1<<" - ";
        cin>>arr[i];
    }
    cout<<"\nArray is - \n";
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"no. "<<i+1<<" - "<<arr[i]<<endl;
    }
    return 0;
}